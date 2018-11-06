#include "sdluna.hpp"

/* Bind Functions */
void SDLuna_VedioBind(lua_State* L)
{
	luaMagic::bind(L, "SDL_CreateWindow", SDL_CreateWindow );
	luaMagic::bind(L, "SDL_DestroyWindow", SDL_DestroyWindow );
	//luaMagic::bind(L, "SDL_GetWindowWMInfo", SDL_GetWindowWMInfo );
	luaMagic::bind(L, "SDL_HideWindow", SDL_HideWindow );
	luaMagic::bind(L, "SDL_IsScreenSaverEnabled", SDL_IsScreenSaverEnabled );
	luaMagic::bind(L, "SDL_MaximizeWindow", SDL_MaximizeWindow );
	luaMagic::bind(L, "SDL_MinimizeWindow", SDL_MinimizeWindow );
	luaMagic::bind(L, "SDL_RaiseWindow", SDL_RaiseWindow );
	luaMagic::bind(L, "SDL_RestoreWindow", SDL_RestoreWindow );
	luaMagic::bind(L, "SDL_SetWindowBordered", SDL_SetWindowBordered );
	luaMagic::bind(L, "SDL_SetWindowBrightness", SDL_SetWindowBrightness );
	luaMagic::bind(L, "SDL_SetWindowData", SDL_SetWindowData );
	luaMagic::bind(L, "SDL_SetWindowDisplayMode", SDL_SetWindowDisplayMode );
	luaMagic::bind(L, "SDL_SetWindowFullscreen", SDL_SetWindowFullscreen );
	luaMagic::bind(L, "SDL_SetWindowGammaRamp", SDL_SetWindowGammaRamp );
	luaMagic::bind(L, "SDL_SetWindowGrab", SDL_SetWindowGrab );
	//luaMagic::bind(L, "SDL_SetWindowHitTest", SDL_SetWindowHitTest );
	luaMagic::bind(L, "SDL_SetWindowIcon", SDL_SetWindowIcon );
	luaMagic::bind(L, "SDL_SetWindowInputFocus", SDL_SetWindowInputFocus );
	luaMagic::bind(L, "SDL_SetWindowMaximumSize", SDL_SetWindowMaximumSize );
	luaMagic::bind(L, "SDL_SetWindowMinimumSize", SDL_SetWindowMinimumSize );
	luaMagic::bind(L, "SDL_SetWindowModalFor", SDL_SetWindowModalFor );
	luaMagic::bind(L, "SDL_SetWindowOpacity", SDL_SetWindowOpacity );
	luaMagic::bind(L, "SDL_SetWindowPosition", SDL_SetWindowPosition );
	luaMagic::bind(L, "SDL_SetWindowResizable", SDL_SetWindowResizable );
	luaMagic::bind(L, "SDL_SetWindowSize", SDL_SetWindowSize );
	luaMagic::bind(L, "SDL_SetWindowTitle", SDL_SetWindowTitle );
	luaMagic::bind(L, "SDL_ShowMessageBox", SDL_ShowMessageBox );
	luaMagic::bind(L, "SDL_ShowSimpleMessageBox", SDL_ShowSimpleMessageBox );
	luaMagic::bind(L, "SDL_ShowWindow", SDL_ShowWindow );
	luaMagic::bind(L, "SDL_VideoInit", SDL_VideoInit );
	luaMagic::bind(L, "SDL_VideoQuit", SDL_VideoQuit );
}

