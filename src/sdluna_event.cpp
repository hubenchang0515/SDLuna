#include "sdluna.hpp"

SDL_Event* SDLuna_PollEvent(void);

/* Bind Functions */
void SDLuna_EventBind(lua_State* L)
{
	luaMagic::bind(L, "PollEvent", SDLuna_PollEvent, true);
	
	luaMagic::setValue(L, "EVENT_QUIT", (int)SDL_QUIT, true);
}


SDL_Event* SDLuna_PollEvent(void)
{
	static SDL_Event event;
	SDL_PollEvent(&event);
	return &event;
}