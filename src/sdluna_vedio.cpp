#include "sdluna.hpp"

/* Bind Functions */
void SDLuna_VedioBind(lua_State* L)
{
	luaMagic::bind(L, "SDL_CreateWindow", SDL_CreateWindow);
	luaMagic::bind(L, "SDL_DestroyWindow", SDL_DestroyWindow);
}

