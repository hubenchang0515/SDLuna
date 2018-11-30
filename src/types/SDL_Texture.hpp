#ifndef SDLUNA_TEXTURE_H
#define SDLUNA_TEXTURE_H

#include <luaMagic/luaMagic.hpp>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>

#define UDATA_SDL_TEXTURE "Texture"
inline int CreateTextureMetatable(lua_State* L);

/* Write SDL_Texture* to Lua */
template<> 
inline void luaMagic_write(lua_State* L, SDL_Texture* value)
{	
	/* Create GC meta-table only once */
	static int gc = CreateTextureMetatable(L);

	if(value == nullptr)
	{
		lua_pushnil(L);
	}
	else
	{
		SDL_Texture** ptr = static_cast<SDL_Texture**>(lua_newuserdata(L, sizeof(value)));
		*ptr = value;
		
		/* Set __gc meta-method */
		lua_getfield(L, LUA_REGISTRYINDEX, UDATA_SDL_TEXTURE);
		lua_setmetatable(L, -2);
	}
}

/* Read SDL_Texture* from Lua */
template<>
inline SDL_Texture* luaMagic_read<SDL_Texture*>(lua_State* L, int index)
{
	return *static_cast<SDL_Texture**>(luaL_checkudata(L, index, UDATA_SDL_TEXTURE));
}


/* Create a meta-table */
inline int CreateTextureMetatable(lua_State* L)
{
	// create metatable with __name = UDATA_SDL_TEXTURE
	luaL_newmetatable(L, UDATA_SDL_TEXTURE);
	
	// __gc meta-method to recycle SDL_Texture
	lua_pushcfunction(L, [](lua_State* L)->int{
		SDL_Texture* ptr = *static_cast<SDL_Texture**>(lua_touserdata(L, 1));
		SDL_DestroyTexture(ptr);
		return 0;
	});
	lua_setfield(L, -2, "__gc");

	return 0;
}

#endif