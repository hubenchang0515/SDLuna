#include "sdluna.hpp"

/* Bind Functions */
void SDLuna_RenderBind(lua_State* L)
{
	luaMagic::bind(L, "SDL_CreateRenderer", SDL_CreateRenderer);
	luaMagic::bind(L, "SDL_DestroyRenderer", SDL_DestroyRenderer);
	luaMagic::bind(L, "SDL_CreateTexture", SDL_CreateTexture);
	luaMagic::bind(L, "SDL_DestroyTexture", SDL_DestroyTexture);
	luaMagic::bind(L, "SDL_RenderClear", SDL_RenderClear);
	//luaMagic::bind(L, "SDL_RenderCopy", SDL_RenderCopy);
	luaMagic::bind(L, "SDL_RenderDrawLine", SDL_RenderDrawLine);
	luaMagic::bind(L, "SDL_RenderDrawPoint", SDL_RenderDrawPoint);
	//luaMagic::bind(L, "SDL_RenderDrawRect", SDL_RenderDrawRect);
	//luaMagic::bind(L, "SDL_RenderFillRect", SDL_RenderFillRect);
	luaMagic::bind(L, "SDL_RenderPresent", SDL_RenderPresent);
	luaMagic::bind(L, "SDL_SetRenderDrawColor", SDL_SetRenderDrawColor);
	//luaMagic::bind(L, "SDL_SetRenderDrawBlendMode", SDL_SetRenderDrawBlendMode);
	//luaMagic::bind(L, "SDL_SetRenderTarget", SDL_SetRenderTarget);
}