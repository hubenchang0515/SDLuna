#ifndef SDLUNA_H
#define SDLUNA_H

#include <luaMagic/luaMagic.hpp>
#include <SDL2/SDL.h>

/* Cancel SDL_main */
//#ifdef main
//#undef main
//#endif

/********************************************************************
**********************Template specializations***********************
********************************************************************/
#include "types/SDL_bool.hpp"
#include "types/SDL_Event.hpp"
#include "types/SDL_Point.hpp"
#include "types/SDL_Rect.hpp"
#include "types/SDL_Renderer.hpp"
#include "types/SDL_Texture.hpp"
#include "types/SDL_Window.hpp"



/********************************************************************
****************************Bind Functions***************************
********************************************************************/
void SDLuna_VedioBind(lua_State* L);
void SDLuna_RenderBind(lua_State* L);
void SDLuna_EventBind(lua_State* L);
void SDLuna_TimerBind(lua_State* L);
void SDLuna_KeyboardBind(lua_State* L);



#endif