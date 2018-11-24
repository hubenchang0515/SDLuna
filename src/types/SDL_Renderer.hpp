#ifndef SDLUNA_RENDERER_H
#define SDLUNA_RENDERER_H

#define SDLUNA_RENDERER_GC "SDLUNA_RENDERER_GC"
inline int CreateRendererGC(lua_State* L);

/* Write SDL_Renderer* to Lua */
template<> 
inline void luaMagic_write(lua_State* L, SDL_Renderer* value)
{	
	/* Create GC meta-table only once */
	static int gc = CreateRendererGC(L);

	if(value == nullptr)
	{
		lua_pushnil(L);
	}
	else
	{
		SDL_Renderer** ptr = static_cast<SDL_Renderer**>(lua_newuserdata(L, sizeof(value)));
		*ptr = value;
		
		/* Set __gc meta-method */
		lua_getfield(L, LUA_REGISTRYINDEX, SDLUNA_RENDERER_GC);
		lua_setmetatable(L, -2);
	}
}

/* Read SDL_Renderer* from Lua */
template<>
inline SDL_Renderer* luaMagic_read<SDL_Renderer*>(lua_State* L, int index)
{
	if(lua_isnoneornil(L, index))
	{
		return nullptr;
	}
	else
	{
		return *static_cast<SDL_Renderer**>(lua_touserdata(L, index));
	}
}


/* Create a meta-table whit __gc meta-method to recycle SDL_Renderer* */
inline int CreateRendererGC(lua_State* L)
{
	lua_newtable(L);
	lua_pushcfunction(L, [](lua_State* L)->int{
		SDL_Renderer* ptr = *static_cast<SDL_Renderer**>(lua_touserdata(L, 1));
		// #ifdef SDLUNA_DEBUG
		// 	SDL_Log("GC : SDL_DestroyRenderer(%p)", ptr);
		// #endif
		SDL_DestroyRenderer(ptr);
		return 0;
	});
	lua_setfield(L, -2, "__gc");
	lua_setfield(L, LUA_REGISTRYINDEX, SDLUNA_RENDERER_GC);

	return 0;
}

#endif