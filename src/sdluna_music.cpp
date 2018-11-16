#include "sdluna.hpp"

Mix_Music* SDLuna_LoadMusic(const char* file);

/* Bind Functions */
void SDLuna_MusicBind(lua_State* L)
{
	/* Functions */
	luaMagic::bind(L, "LoadMusic", Mix_LoadMUS, true);
}

int SDLuna_PlayMusic(Mix_Music *music, bool loop)
{
	return Mix_PlayMusic(music, static_cast<int>(loop));
}
