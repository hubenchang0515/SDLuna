#ifndef SDLUNA_SDL_POINT_H
#define SDLUNA_SDL_POINT_H

#include <luaMagic/luaMagic.hpp>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>

/* Write SDL_Point* to Lua */
template<> 
inline void luaMagic_write(lua_State* L, SDL_Point* value)
{	
	
}

/* Read SDL_Point* from Lua */
template<>
inline SDL_Point* luaMagic_read<SDL_Point*>(lua_State* L, int index)
{
	static SDL_Point p;
	lua_rawgeti(L, index, 1);
	p.x = static_cast<int>(luaL_checkinteger(L,-1));
	lua_rawgeti(L, index, 2);
	p.y = static_cast<int>(luaL_checkinteger(L,-1));
	return &p;
}

#endif