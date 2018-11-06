#ifndef SDLUNA_SDL_BOOL_H
#define SDLUNA_SDL_BOOL_H

/* Write SDL_bool to Lua */
template<> 
inline void luaMagic_write(lua_State* L, SDL_bool value)
{	
	lua_pushboolean(L, value == SDL_TRUE);
}

/* Read SDL_bool from Lua */
template<>
inline SDL_bool luaMagic_read<SDL_bool>(lua_State* L, int index)
{
	return static_cast<SDL_bool>(lua_toboolean(L, index) == SDL_TRUE);
}

#endif