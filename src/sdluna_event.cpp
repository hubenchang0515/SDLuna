#include "sdluna.hpp"

SDL_Event* SDLuna_PollEvent(void);

/* Bind Functions */
void SDLuna_EventBind(lua_State* L)
{
	luaMagic::bind(L, "SDL_PollEvent", SDLuna_PollEvent);
	
	luaMagic::setValue(L, "SDL_QUIT", (int)SDL_QUIT);
}


SDL_Event* SDLuna_PollEvent(void)
{
	static SDL_Event event;
	SDL_PollEvent(&event);
	return &event;
}