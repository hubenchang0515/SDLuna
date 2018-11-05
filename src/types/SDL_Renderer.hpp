#ifndef SDLUNA_SDL_RENDERER_H
#define SDLUNA_SDL_RENDERER_H

/* Write SDL_Renderer* to Lua */
template<> 
inline void luaMagic_write<SDL_Renderer*>(lua_State* L, SDL_Renderer* value)
{
#ifdef SDLUNA_DEBUG
	SDL_Log("Write SDL_Renderer* to Lua : %p \n", value);
#endif
	lua_pushlightuserdata(L, static_cast<void*>(value));
}

/* Read SDL_Renderer* from Lua */
template<>
inline SDL_Renderer* luaMagic_read<SDL_Renderer*>(lua_State* L, int index)
{
	void* value = lua_touserdata(L, index);
#ifdef SDLUNA_DEBUG
	SDL_Log("Read SDL_Renderer* from Lua : %p \n", value);
#endif
	return static_cast<SDL_Renderer*>(value);
}

#endif