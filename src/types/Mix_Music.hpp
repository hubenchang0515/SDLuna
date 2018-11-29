#ifndef SDLUNA_MUSIC_H
#define SDLUNA_MUSIC_H

#include <luaMagic/luaMagic.hpp>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>

#define UDATA_MIX_MUSIC "Music"
inline int CreateMusicMetatable(lua_State* L);

/* Write Mix_Music* to Lua */
template<> 
inline void luaMagic_write(lua_State* L, Mix_Music* value)
{	
	/* Create GC meta-table only once */
	static int gc = CreateMusicMetatable(L);

	if(value == nullptr)
	{
		lua_pushnil(L);
	}
	else
	{
		Mix_Music** ptr = static_cast<Mix_Music**>(lua_newuserdata(L, sizeof(value)));
		*ptr = value;
		
		/* Set __gc meta-method */
		lua_getfield(L, LUA_REGISTRYINDEX, UDATA_MIX_MUSIC);
		lua_setmetatable(L, -2);
	}
}

/* Read Mix_Music* from Lua */
template<>
inline Mix_Music* luaMagic_read<Mix_Music*>(lua_State* L, int index)
{
	if(luaL_checkudata(L, index, UDATA_MIX_MUSIC))
	{
		return *static_cast<Mix_Music**>(lua_touserdata(L, index));
	}
	else
	{
		luaL_error(L, "bad argument #%d (%s expected, got %s)", 
					index, UDATA_MIX_MUSIC, luaL_typename(L, index));
		return nullptr;
	}
}


/* Create a meta-table */
inline int CreateMusicMetatable(lua_State* L)
{
	// create metatable with __name = UDATA_MIX_MUSIC
	luaL_newmetatable(L, UDATA_MIX_MUSIC);
	
	// __gc meta-method to recycle Mix_Music
	lua_pushcfunction(L, [](lua_State* L)->int{
		Mix_Music* ptr = *static_cast<Mix_Music**>(lua_touserdata(L, 1));
		Mix_FreeMusic(ptr);
		return 0;
	});
	lua_setfield(L, -2, "__gc");
	
	// __tostring meta-method to print
	lua_pushcfunction(L, [](lua_State* L)->int{
		Mix_Music* ptr = *static_cast<Mix_Music**>(lua_touserdata(L, 1));
		lua_pushfstring(L, "%s : %p", UDATA_MIX_MUSIC, ptr);
		return 1;
	});

	return 0;
}

#endif