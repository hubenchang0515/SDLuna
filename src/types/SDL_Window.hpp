#ifndef SDLUNA_SDL_WINDOW_H
#define SDLUNA_SDL_WINDOW_H

/* Write SDL_Window* to Lua */
template<> 
inline void luaMagic_write<SDL_Window*>(lua_State* L, SDL_Window* value)
{
#ifdef SDLUNA_DEBUG
	SDL_Log("Write SDL_Window* to Lua : %p \n", value);
#endif
	lua_pushlightuserdata(L, static_cast<void*>(value));
}

/* Read SDL_Window* from Lua */
template<>
inline SDL_Window* luaMagic_read<SDL_Window*>(lua_State* L, int index)
{
	void* value = lua_touserdata(L, index);
#ifdef SDLUNA_DEBUG
	SDL_Log("Read SDL_Window* from Lua : %p \n", value);
#endif
	return static_cast<SDL_Window*>(value);
}

#endif