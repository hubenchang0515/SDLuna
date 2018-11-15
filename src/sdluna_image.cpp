#include "sdluna.hpp"
#include <SDL2/SDL_image.h>

SDL_Texture* SDLuna_LoadImage(SDL_Renderer* renderer, const char* file);

/* Bind Functions */
void SDLuna_ImageBind(lua_State* L)
{
	IMG_Init(IMG_INIT_JPG|IMG_INIT_PNG|IMG_INIT_TIF);
	/* Functions */
	luaMagic::bind(L, "LoadImage", SDLuna_LoadImage, true);
}

SDL_Texture* SDLuna_LoadImage(SDL_Renderer* renderer, const char* file)
{
	SDL_Surface* surface = IMG_Load(file);
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer,surface);
	
	return texture;
}
