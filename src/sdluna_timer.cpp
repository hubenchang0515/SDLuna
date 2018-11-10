#include "sdluna.hpp"

/* Bind Functions */
void SDLuna_TimerBind(lua_State* L)
{
	/* Functions */
	luaMagic::bind(L, "Delay", SDL_Delay, true);
	
}

