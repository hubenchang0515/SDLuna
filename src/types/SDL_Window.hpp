#ifndef SDLUNA_WINDOW_H
#define SDLUNA_WINDOW_H

#define SDLUNA_WINDOW_GC "SDLUNA_WINDOW_GC"
inline int CreateWindowGC(lua_State* L);

/* Write SDL_Window* to Lua */
template<> 
inline void luaMagic_write(lua_State* L, SDL_Window* value)
{	
	/* Create GC meta-table only once */
	static int gc = CreateWindowGC(L);

	if(value == nullptr)
	{
		lua_pushnil(L);
	}
	else
	{
		SDL_Window** ptr = static_cast<SDL_Window**>(lua_newuserdata(L, sizeof(value)));
		*ptr = value;
		
		/* Set __gc meta-method */
		lua_getfield(L, LUA_REGISTRYINDEX, SDLUNA_WINDOW_GC);
		lua_setmetatable(L, -2);
	}
}

/* Read SDL_Window* from Lua */
template<>
inline SDL_Window* luaMagic_read<SDL_Window*>(lua_State* L, int index)
{
	if(lua_isnoneornil(L, index))
	{
		return nullptr;
	}
	else
	{
		return *static_cast<SDL_Window**>(lua_touserdata(L, index));
	}
}


/* Create a meta-table whit __gc meta-method to recycle SDL_Window* */
inline int CreateWindowGC(lua_State* L)
{
	lua_newtable(L);
	lua_pushcfunction(L, [](lua_State* L)->int{
		SDL_Window* ptr = *static_cast<SDL_Window**>(lua_touserdata(L, 1));
		// #ifdef SDLUNA_DEBUG
		// 	SDL_Log("GC : SDL_DestroyWindow(%p)", ptr);
		// #endif
		SDL_DestroyWindow(ptr);
		return 0;
	});
	lua_setfield(L, -2, "__gc");
	lua_setfield(L, LUA_REGISTRYINDEX, SDLUNA_WINDOW_GC);

	return 0;
}

#endif