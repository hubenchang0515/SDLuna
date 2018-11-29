#ifndef SDLUNA_FONT_H
#define SDLUNA_FONT_H

#include <luaMagic/luaMagic.hpp>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>

#define UDATA_TTF_FONT "Font"
inline int CreateFontMetatable(lua_State* L);

/* Write TTF_Font* to Lua */
template<> 
inline void luaMagic_write(lua_State* L, TTF_Font* value)
{	
	/* Create GC meta-table only once */
	static int gc = CreateFontMetatable(L);

	if(value == nullptr)
	{
		lua_pushnil(L);
	}
	else
	{
		TTF_Font** ptr = static_cast<TTF_Font**>(lua_newuserdata(L, sizeof(value)));
		*ptr = value;
		
		/* Set __gc meta-method */
		lua_getfield(L, LUA_REGISTRYINDEX, UDATA_TTF_FONT);
		lua_setmetatable(L, -2);
	}
}

/* Read TTF_Font* from Lua */
template<>
inline TTF_Font* luaMagic_read<TTF_Font*>(lua_State* L, int index)
{
	if(luaL_checkudata(L, index, UDATA_TTF_FONT))
	{
		return *static_cast<TTF_Font**>(lua_touserdata(L, index));
	}
	else
	{
		luaL_error(L, "bad argument #%d (%s expected, got %s)", 
					index, UDATA_TTF_FONT, luaL_typename(L, index));
		return nullptr;
	}
}


/* Create a meta-table */
inline int CreateFontMetatable(lua_State* L)
{
	// create metatable with __name = UDATA_TTF_FONT
	luaL_newmetatable(L, UDATA_TTF_FONT);
	
	// __gc meta-method to recycle TTF_Font
	lua_pushcfunction(L, [](lua_State* L)->int{
		TTF_Font* ptr = *static_cast<TTF_Font**>(lua_touserdata(L, 1));
		TTF_CloseFont(ptr);
		return 0;
	});
	lua_setfield(L, -2, "__gc");
	
	// __tostring meta-method to print
	lua_pushcfunction(L, [](lua_State* L)->int{
		TTF_Font* ptr = *static_cast<TTF_Font**>(lua_touserdata(L, 1));
		lua_pushfstring(L, "%s : %p", UDATA_TTF_FONT, ptr);
		return 1;
	});

	return 0;
}

#endif