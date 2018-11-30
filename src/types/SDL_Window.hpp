#ifndef SDLUNA_WINDOW_H
#define SDLUNA_WINDOW_H

#include <luaMagic/luaMagic.hpp>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>

#define UDATA_SDL_WINDOW "Window"
inline int CreateWindowMetatable(lua_State* L);

/* Write SDL_Window* to Lua */
template<> 
inline void luaMagic_write(lua_State* L, SDL_Window* value)
{	
	/* Create GC meta-table only once */
	static int gc = CreateWindowMetatable(L);

	if(value == nullptr)
	{
		lua_pushnil(L);
	}
	else
	{
		SDL_Window** ptr = static_cast<SDL_Window**>(lua_newuserdata(L, sizeof(value)));
		*ptr = value;
		
		/* Set __gc meta-method */
		lua_getfield(L, LUA_REGISTRYINDEX, UDATA_SDL_WINDOW);
		lua_setmetatable(L, -2);
	}
}

/* Read SDL_Window* from Lua */
template<>
inline SDL_Window* luaMagic_read<SDL_Window*>(lua_State* L, int index)
{
	return *static_cast<SDL_Window**>(luaL_checkudata(L, index, UDATA_SDL_WINDOW));
}


/* Create a meta-table */
inline int CreateWindowMetatable(lua_State* L)
{
	// create metatable with __name = UDATA_SDL_WINDOW
	luaL_newmetatable(L, UDATA_SDL_WINDOW);
	
	// __gc meta-method to recycle SDL_Window
	lua_pushcfunction(L, [](lua_State* L)->int{
		SDL_Window* ptr = *static_cast<SDL_Window**>(lua_touserdata(L, 1));
		SDL_DestroyWindow(ptr);
		return 0;
	});
	lua_setfield(L, -2, "__gc");

	return 0;
}

#endif