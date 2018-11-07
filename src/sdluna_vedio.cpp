#include "sdluna.hpp"

/* Bind Functions */
void SDLuna_VedioBind(lua_State* L)
{
	luaMagic::bind(L, "SDL_CreateWindow", SDL_CreateWindow, true);
	luaMagic::bind(L, "SDL_DestroyWindow", SDL_DestroyWindow, true);
	//luaMagic::bind(L, "SDL_GetWindowWMInfo", SDL_GetWindowWMInfo, true);
	luaMagic::bind(L, "SDL_HideWindow", SDL_HideWindow, true);
	luaMagic::bind(L, "SDL_IsScreenSaverEnabled", SDL_IsScreenSaverEnabled, true);
	luaMagic::bind(L, "SDL_MaximizeWindow", SDL_MaximizeWindow, true);
	luaMagic::bind(L, "SDL_MinimizeWindow", SDL_MinimizeWindow, true);
	luaMagic::bind(L, "SDL_RaiseWindow", SDL_RaiseWindow, true);
	luaMagic::bind(L, "SDL_RestoreWindow", SDL_RestoreWindow, true);
	luaMagic::bind(L, "SDL_SetWindowBordered", SDL_SetWindowBordered, true);
	luaMagic::bind(L, "SDL_SetWindowBrightness", SDL_SetWindowBrightness, true);
	luaMagic::bind(L, "SDL_SetWindowData", SDL_SetWindowData, true);
	luaMagic::bind(L, "SDL_SetWindowDisplayMode", SDL_SetWindowDisplayMode, true);
	luaMagic::bind(L, "SDL_SetWindowFullscreen", SDL_SetWindowFullscreen, true);
	luaMagic::bind(L, "SDL_SetWindowGammaRamp", SDL_SetWindowGammaRamp, true);
	luaMagic::bind(L, "SDL_SetWindowGrab", SDL_SetWindowGrab, true);
	//luaMagic::bind(L, "SDL_SetWindowHitTest", SDL_SetWindowHitTest, true);
	luaMagic::bind(L, "SDL_SetWindowIcon", SDL_SetWindowIcon, true);
	luaMagic::bind(L, "SDL_SetWindowInputFocus", SDL_SetWindowInputFocus, true);
	luaMagic::bind(L, "SDL_SetWindowMaximumSize", SDL_SetWindowMaximumSize, true);
	luaMagic::bind(L, "SDL_SetWindowMinimumSize", SDL_SetWindowMinimumSize, true);
	luaMagic::bind(L, "SDL_SetWindowModalFor", SDL_SetWindowModalFor, true);
	luaMagic::bind(L, "SDL_SetWindowOpacity", SDL_SetWindowOpacity, true);
	luaMagic::bind(L, "SDL_SetWindowPosition", SDL_SetWindowPosition, true);
	luaMagic::bind(L, "SDL_SetWindowResizable", SDL_SetWindowResizable, true);
	luaMagic::bind(L, "SDL_SetWindowSize", SDL_SetWindowSize, true);
	luaMagic::bind(L, "SDL_SetWindowTitle", SDL_SetWindowTitle, true);
	luaMagic::bind(L, "SDL_ShowMessageBox", SDL_ShowMessageBox, true);
	luaMagic::bind(L, "SDL_ShowSimpleMessageBox", SDL_ShowSimpleMessageBox, true);
	luaMagic::bind(L, "SDL_ShowWindow", SDL_ShowWindow, true);
	luaMagic::bind(L, "SDL_VideoInit", SDL_VideoInit, true);
	luaMagic::bind(L, "SDL_VideoQuit", SDL_VideoQuit, true);
}

