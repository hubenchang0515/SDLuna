#ifndef SDLUNA_SDL_TEXTURE_H
#define SDLUNA_SDL_TEXTURE_H

/* Write SDL_Texture* to Lua */
template<> 
inline void luaMagic_write<SDL_Texture*>(lua_State* L, SDL_Texture* value)
{
#ifdef SDLUNA_DEBUG
	SDL_Log("Write SDL_Texture* to Lua : %p \n", value);
#endif
	lua_pushlightuserdata(L, static_cast<void*>(value));
}

/* Read SDL_Texture* from Lua */
template<>
inline SDL_Texture* luaMagic_read<SDL_Texture*>(lua_State* L, int index)
{
	void* value = lua_touserdata(L, index);
#ifdef SDLUNA_DEBUG
	SDL_Log("Read SDL_Texture* from Lua : %p \n", value);
#endif
	return static_cast<SDL_Texture*>(value);
}

#endif