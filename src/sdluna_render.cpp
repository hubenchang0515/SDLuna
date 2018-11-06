#include "sdluna.hpp"

/* Bind Functions */
void SDLuna_RenderBind(lua_State* L)
{
	//luaMagic::bind(L, "SDL_ComposeCustomBlendMode", SDL_ComposeCustomBlendMode );
	luaMagic::bind(L, "SDL_CreateRenderer", SDL_CreateRenderer );
	luaMagic::bind(L, "SDL_CreateSoftwareRenderer", SDL_CreateSoftwareRenderer );
	luaMagic::bind(L, "SDL_CreateTexture", SDL_CreateTexture );
	luaMagic::bind(L, "SDL_CreateTextureFromSurface", SDL_CreateTextureFromSurface );
	luaMagic::bind(L, "SDL_CreateWindowAndRenderer", SDL_CreateWindowAndRenderer );
	luaMagic::bind(L, "SDL_DestroyRenderer", SDL_DestroyRenderer );
	luaMagic::bind(L, "SDL_DestroyTexture", SDL_DestroyTexture );
	luaMagic::bind(L, "SDL_GL_BindTexture", SDL_GL_BindTexture );
	luaMagic::bind(L, "SDL_GL_UnbindTexture", SDL_GL_UnbindTexture );
	// luaMagic::bind(L, "SDL_GetNumRenderDrivers", SDL_GetNumRenderDrivers );
	// luaMagic::bind(L, "SDL_GetRenderDrawBlendMode", SDL_GetRenderDrawBlendMode );
	// luaMagic::bind(L, "SDL_GetRenderDrawColor", SDL_GetRenderDrawColor );
	// luaMagic::bind(L, "SDL_GetRenderDriverInfo", SDL_GetRenderDriverInfo );
	// luaMagic::bind(L, "SDL_GetRenderTarget", SDL_GetRenderTarget );
	// luaMagic::bind(L, "SDL_GetRenderer", SDL_GetRenderer );
	// luaMagic::bind(L, "SDL_GetRendererInfo", SDL_GetRendererInfo );
	// luaMagic::bind(L, "SDL_GetRendererOutputSize", SDL_GetRendererOutputSize );
	// luaMagic::bind(L, "SDL_GetTextureAlphaMod", SDL_GetTextureAlphaMod );
	// luaMagic::bind(L, "SDL_GetTextureBlendMode", SDL_GetTextureBlendMode );
	// luaMagic::bind(L, "SDL_GetTextureColorMod", SDL_GetTextureColorMod );
	luaMagic::bind(L, "SDL_LockTexture", SDL_LockTexture );
	luaMagic::bind(L, "SDL_QueryTexture", SDL_QueryTexture );
	luaMagic::bind(L, "SDL_RenderClear", SDL_RenderClear );
	luaMagic::bind(L, "SDL_RenderCopy", SDL_RenderCopy );
	//luaMagic::bind(L, "SDL_RenderCopyEx", SDL_RenderCopyEx );
	luaMagic::bind(L, "SDL_RenderDrawLine", SDL_RenderDrawLine );
	// luaMagic::bind(L, "SDL_RenderDrawLines", SDL_RenderDrawLines );
	luaMagic::bind(L, "SDL_RenderDrawPoint", SDL_RenderDrawPoint );
	// luaMagic::bind(L, "SDL_RenderDrawPoints", SDL_RenderDrawPoints );
	luaMagic::bind(L, "SDL_RenderDrawRect", SDL_RenderDrawRect );
	// luaMagic::bind(L, "SDL_RenderDrawRects", SDL_RenderDrawRects );
	luaMagic::bind(L, "SDL_RenderFillRect", SDL_RenderFillRect );
	luaMagic::bind(L, "SDL_RenderFillRects", SDL_RenderFillRects );
	luaMagic::bind(L, "SDL_RenderGetClipRect", SDL_RenderGetClipRect );
	luaMagic::bind(L, "SDL_RenderGetIntegerScale", SDL_RenderGetIntegerScale );
	luaMagic::bind(L, "SDL_RenderGetLogicalSize", SDL_RenderGetLogicalSize );
	luaMagic::bind(L, "SDL_RenderGetScale", SDL_RenderGetScale );
	luaMagic::bind(L, "SDL_RenderGetViewport", SDL_RenderGetViewport );
	luaMagic::bind(L, "SDL_RenderIsClipEnabled", SDL_RenderIsClipEnabled );
	luaMagic::bind(L, "SDL_RenderPresent", SDL_RenderPresent );
	luaMagic::bind(L, "SDL_RenderReadPixels", SDL_RenderReadPixels );
	luaMagic::bind(L, "SDL_RenderSetClipRect", SDL_RenderSetClipRect );
	luaMagic::bind(L, "SDL_RenderSetIntegerScale", SDL_RenderSetIntegerScale );
	luaMagic::bind(L, "SDL_RenderSetLogicalSize", SDL_RenderSetLogicalSize );
	luaMagic::bind(L, "SDL_RenderSetScale", SDL_RenderSetScale );
	luaMagic::bind(L, "SDL_RenderSetViewport", SDL_RenderSetViewport );
	luaMagic::bind(L, "SDL_RenderTargetSupported", SDL_RenderTargetSupported );
	//luaMagic::bind(L, "SDL_SetRenderDrawBlendMode", SDL_SetRenderDrawBlendMode );
	luaMagic::bind(L, "SDL_SetRenderDrawColor", SDL_SetRenderDrawColor );
	luaMagic::bind(L, "SDL_SetRenderTarget", SDL_SetRenderTarget );
	luaMagic::bind(L, "SDL_SetTextureAlphaMod", SDL_SetTextureAlphaMod );
	//luaMagic::bind(L, "SDL_SetTextureBlendMode", SDL_SetTextureBlendMode );
	luaMagic::bind(L, "SDL_SetTextureColorMod", SDL_SetTextureColorMod );
	luaMagic::bind(L, "SDL_UnlockTexture", SDL_UnlockTexture );
	luaMagic::bind(L, "SDL_UpdateTexture", SDL_UpdateTexture );
	luaMagic::bind(L, "SDL_UpdateYUVTexture", SDL_UpdateYUVTexture );
}