#ifndef SDLUNA_H
#define SDLUNA_H

#include <luaMagic/luaMagic.hpp>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>

/* Cancel SDL_main */
//#ifdef main
//#undef main
//#endif

/********************************************************************
**********************Template specializations***********************
********************************************************************/
#include "types/Mix_Music.hpp"
#include "types/SDL_bool.hpp"
#include "types/SDL_Event.hpp"
#include "types/SDL_Point.hpp"
#include "types/SDL_Rect.hpp"
#include "types/SDL_Renderer.hpp"
#include "types/SDL_Texture.hpp"
#include "types/SDL_Window.hpp"
#include "types/TTF_Font.hpp"



/********************************************************************
****************************Bind Functions***************************
********************************************************************/
void SDLuna_VedioBind(lua_State* L);
void SDLuna_RenderBind(lua_State* L);
void SDLuna_EventBind(lua_State* L);
void SDLuna_ImageBind(lua_State* L);
void SDLuna_TimerBind(lua_State* L);
void SDLuna_KeyboardBind(lua_State* L);
void SDLuna_DrawBind(lua_State* L);
void SDLuna_MusicBind(lua_State* L);
void SDLuna_ErrorBind(lua_State* L);
void SDLuna_TtfBind(lua_State* L);


#endif