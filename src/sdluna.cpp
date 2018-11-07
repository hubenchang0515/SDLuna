#include "sdluna.hpp"

extern "C"
{
	int luaopen_libsdluna(lua_State* L)
	{
		SDL_Init(SDL_INIT_EVERYTHING);
		
		lua_newtable(L);
		SDLuna_VedioBind(L);
		SDLuna_RenderBind(L);
		SDLuna_EventBind(L);
		
		return 1;
	}
}