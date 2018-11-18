#include "sdluna.hpp"

int SDLuna_PlayMusic(Mix_Music *music, bool loop);

/* Bind Functions */
void SDLuna_MusicBind(lua_State* L)
{
	Mix_OpenAudio(MIX_DEFAULT_FREQUENCY, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 2048);
	/* Functions */
	luaMagic::bind(L, "LoadMusic", Mix_LoadMUS, true);
	luaMagic::bind(L, "PlayMusic", SDLuna_PlayMusic, true);
	luaMagic::bind(L, "PauseMusic", Mix_PauseMusic, true);
	luaMagic::bind(L, "ResumeMusic", Mix_ResumeMusic, true);
	luaMagic::bind(L, "MusicError", Mix_GetError, true);
}

int SDLuna_PlayMusic(Mix_Music *music, bool loop)
{
	return Mix_PlayMusic(music, static_cast<int>(loop));
}
