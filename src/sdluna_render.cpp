#include "sdluna.hpp"

/* Bind Functions */
void SDLuna_RenderBind(lua_State* L)
{
	//luaMagic::bind(L, "SDL_ComposeCustomBlendMode", SDL_ComposeCustomBlendMode, true);
	luaMagic::bind(L, "SDL_CreateRenderer", SDL_CreateRenderer, true);
	luaMagic::bind(L, "SDL_CreateSoftwareRenderer", SDL_CreateSoftwareRenderer, true);
	luaMagic::bind(L, "SDL_CreateTexture", SDL_CreateTexture, true);
	luaMagic::bind(L, "SDL_CreateTextureFromSurface", SDL_CreateTextureFromSurface, true);
	luaMagic::bind(L, "SDL_CreateWindowAndRenderer", SDL_CreateWindowAndRenderer, true);
	luaMagic::bind(L, "SDL_DestroyRenderer", SDL_DestroyRenderer, true);
	luaMagic::bind(L, "SDL_DestroyTexture", SDL_DestroyTexture, true);
	luaMagic::bind(L, "SDL_GL_BindTexture", SDL_GL_BindTexture, true);
	luaMagic::bind(L, "SDL_GL_UnbindTexture", SDL_GL_UnbindTexture, true);
	// luaMagic::bind(L, "SDL_GetNumRenderDrivers", SDL_GetNumRenderDrivers, true);
	// luaMagic::bind(L, "SDL_GetRenderDrawBlendMode", SDL_GetRenderDrawBlendMode, true);
	// luaMagic::bind(L, "SDL_GetRenderDrawColor", SDL_GetRenderDrawColor, true);
	// luaMagic::bind(L, "SDL_GetRenderDriverInfo", SDL_GetRenderDriverInfo, true);
	// luaMagic::bind(L, "SDL_GetRenderTarget", SDL_GetRenderTarget, true);
	// luaMagic::bind(L, "SDL_GetRenderer", SDL_GetRenderer, true);
	// luaMagic::bind(L, "SDL_GetRendererInfo", SDL_GetRendererInfo, true);
	// luaMagic::bind(L, "SDL_GetRendererOutputSize", SDL_GetRendererOutputSize, true);
	// luaMagic::bind(L, "SDL_GetTextureAlphaMod", SDL_GetTextureAlphaMod, true);
	// luaMagic::bind(L, "SDL_GetTextureBlendMode", SDL_GetTextureBlendMode, true);
	// luaMagic::bind(L, "SDL_GetTextureColorMod", SDL_GetTextureColorMod, true);
	luaMagic::bind(L, "SDL_LockTexture", SDL_LockTexture, true);
	luaMagic::bind(L, "SDL_QueryTexture", SDL_QueryTexture, true);
	luaMagic::bind(L, "SDL_RenderClear", SDL_RenderClear, true);
	luaMagic::bind(L, "SDL_RenderCopy", SDL_RenderCopy, true);
	//luaMagic::bind(L, "SDL_RenderCopyEx", SDL_RenderCopyEx, true);
	luaMagic::bind(L, "SDL_RenderDrawLine", SDL_RenderDrawLine, true);
	// luaMagic::bind(L, "SDL_RenderDrawLines", SDL_RenderDrawLines, true);
	luaMagic::bind(L, "SDL_RenderDrawPoint", SDL_RenderDrawPoint, true);
	// luaMagic::bind(L, "SDL_RenderDrawPoints", SDL_RenderDrawPoints, true);
	luaMagic::bind(L, "SDL_RenderDrawRect", SDL_RenderDrawRect, true);
	// luaMagic::bind(L, "SDL_RenderDrawRects", SDL_RenderDrawRects, true);
	luaMagic::bind(L, "SDL_RenderFillRect", SDL_RenderFillRect, true);
	luaMagic::bind(L, "SDL_RenderFillRects", SDL_RenderFillRects, true);
	luaMagic::bind(L, "SDL_RenderGetClipRect", SDL_RenderGetClipRect, true);
	luaMagic::bind(L, "SDL_RenderGetIntegerScale", SDL_RenderGetIntegerScale, true);
	luaMagic::bind(L, "SDL_RenderGetLogicalSize", SDL_RenderGetLogicalSize, true);
	luaMagic::bind(L, "SDL_RenderGetScale", SDL_RenderGetScale, true);
	luaMagic::bind(L, "SDL_RenderGetViewport", SDL_RenderGetViewport, true);
	luaMagic::bind(L, "SDL_RenderIsClipEnabled", SDL_RenderIsClipEnabled, true);
	luaMagic::bind(L, "SDL_RenderPresent", SDL_RenderPresent, true);
	luaMagic::bind(L, "SDL_RenderReadPixels", SDL_RenderReadPixels, true);
	luaMagic::bind(L, "SDL_RenderSetClipRect", SDL_RenderSetClipRect, true);
	luaMagic::bind(L, "SDL_RenderSetIntegerScale", SDL_RenderSetIntegerScale, true);
	luaMagic::bind(L, "SDL_RenderSetLogicalSize", SDL_RenderSetLogicalSize, true);
	luaMagic::bind(L, "SDL_RenderSetScale", SDL_RenderSetScale, true);
	luaMagic::bind(L, "SDL_RenderSetViewport", SDL_RenderSetViewport, true);
	luaMagic::bind(L, "SDL_RenderTargetSupported", SDL_RenderTargetSupported, true);
	//luaMagic::bind(L, "SDL_SetRenderDrawBlendMode", SDL_SetRenderDrawBlendMode, true);
	luaMagic::bind(L, "SDL_SetRenderDrawColor", SDL_SetRenderDrawColor, true);
	luaMagic::bind(L, "SDL_SetRenderTarget", SDL_SetRenderTarget, true);
	luaMagic::bind(L, "SDL_SetTextureAlphaMod", SDL_SetTextureAlphaMod, true);
	//luaMagic::bind(L, "SDL_SetTextureBlendMode", SDL_SetTextureBlendMode, true);
	luaMagic::bind(L, "SDL_SetTextureColorMod", SDL_SetTextureColorMod, true);
	luaMagic::bind(L, "SDL_UnlockTexture", SDL_UnlockTexture, true);
	luaMagic::bind(L, "SDL_UpdateTexture", SDL_UpdateTexture, true);
	luaMagic::bind(L, "SDL_UpdateYUVTexture", SDL_UpdateYUVTexture, true);
}