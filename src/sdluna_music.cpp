#include "sdluna.hpp"

int SDLuna_PlayMusic(Mix_Music *music, bool loop);

/* Bind Functions */
void SDLuna_MusicBind(lua_State* L)
{
	/* Functions */
	luaMagic::bind(L, "LoadMusic", Mix_LoadMUS, true);
	luaMagic::bind(L, "PlayMusic", SDLuna_PlayMusic, true);
	luaMagic::bind(L, "PauseMusic", Mix_PauseMusic, true);
	luaMagic::bind(L, "ResumeMusic", Mix_ResumeMusic, true);
	luaMagic::bind(L, "MusicError", Mix_GetError, true);
}

int SDLuna_PlayMusic(Mix_Music *music, bool loop)
{
	if(loop)
	{
		return Mix_PlayMusic(music, -1);
	}
	else
	{
		return Mix_PlayMusic(music, 1);
	}
}
