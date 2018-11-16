#include "sdluna.hpp"

#define SDLUNA_URL "https://github.com/hubenchang0515/SDLuna"
#define SDLUNA_GLOBAL_IDENTIFICATION "__SDLUNA_GLOBAL_IDENTIFICATION__"

extern "C"
{
	int luaopen_libsdluna(lua_State* L)
	{
		/* Avoid to create object repeatedly */
		static bool firsttime = true;
		
		if(!firsttime)
		{
			/* SDLuna had been initialized before */
			lua_getfield(L, LUA_REGISTRYINDEX, SDLUNA_GLOBAL_IDENTIFICATION);
		}
		else if(0 == SDL_Init(SDL_INIT_EVERYTHING) && 
				0 == IMG_Init(IMG_INIT_JPG|IMG_INIT_PNG|IMG_INIT_TIF) &&
				0 == Mix_Init(MIX_INIT_FLAC|MIX_INIT_MOD|MIX_INIT_MP3|MIX_INIT_OGG) &&
				0 == TTF_Init())
		{
			/* Initialize SDLuna first time */
			firsttime = false;
			
			/* Bind */
			lua_newtable(L);
			SDLuna_VedioBind(L);
			SDLuna_RenderBind(L);
			SDLuna_EventBind(L);
			SDLuna_ImageBind(L);
			SDLuna_TimerBind(L);
			SDLuna_KeyboardBind(L);
			SDLuna_DrawBind(L);
			
			/* Set __gc meta-method*/
			lua_newtable(L);
			lua_pushcfunction(L, [](lua_State* L)->int{SDL_Quit();IMG_Quit();Mix_Quit();TTF_Quit(); return 0;});
			lua_setfield(L, -2, "__gc");
			lua_pushcfunction(L, [](lua_State* L)->int{lua_pushstring(L, SDLUNA_URL); return 1;});
			lua_setfield(L, -2, "__tostring");
			lua_setmetatable(L, -2);
			
			/* save */
			lua_setfield(L, LUA_REGISTRYINDEX, SDLUNA_GLOBAL_IDENTIFICATION);
			lua_getfield(L, LUA_REGISTRYINDEX, SDLUNA_GLOBAL_IDENTIFICATION);
		}
		else
		{
			/* failed */
			SDL_Quit();
			IMG_Quit();
			Mix_Quit();
			TTF_Quit();
			lua_pushnil(L);
		}
		
		return 1;
	}
}