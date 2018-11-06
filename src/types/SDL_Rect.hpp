#ifndef SDLUNA_SDL_RECT_H
#define SDLUNA_SDL_RECT_H

/* Write SDL_Rect* to Lua */
template<> 
inline void luaMagic_write(lua_State* L, SDL_Rect* value)
{	
	
}

/* Read SDL_Rect* from Lua */
template<>
inline const SDL_Rect* luaMagic_read<const SDL_Rect*>(lua_State* L, int index)
{
	static SDL_Rect rect;
	lua_rawgeti(L, index, 1);
	rect.x = luaL_checkinteger(L,-1);
	lua_rawgeti(L, index, 2);
	rect.y = luaL_checkinteger(L,-1);
	lua_rawgeti(L, index, 3);
	rect.w = luaL_checkinteger(L,-1);
	lua_rawgeti(L, index, 4);
	rect.h = luaL_checkinteger(L,-1);
	return &rect;
}

#endif