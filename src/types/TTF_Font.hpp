#ifndef SDLUNA_FONT_H
#define SDLUNA_FONT_H

#define SDLUNA_FONT_GC "SDLUNA_FONT_GC"
inline int CreateFontGC(lua_State* L);

/* Write TTF_Font* to Lua */
template<> 
inline void luaMagic_write(lua_State* L, TTF_Font* value)
{	
	/* Create GC meta-table only once */
	static int gc = CreateFontGC(L);

	if(value == nullptr)
	{
		lua_pushnil(L);
	}
	else
	{
		TTF_Font** ptr = static_cast<TTF_Font**>(lua_newuserdata(L, sizeof(value)));
		*ptr = value;
		
		/* Set __gc meta-method */
		lua_getfield(L, LUA_REGISTRYINDEX, SDLUNA_FONT_GC);
		lua_setmetatable(L, -2);
	}
}

/* Read TTF_Font* from Lua */
template<>
inline TTF_Font* luaMagic_read<TTF_Font*>(lua_State* L, int index)
{
	if(lua_isnoneornil(L, index))
	{
		return nullptr;
	}
	else
	{
		return *static_cast<TTF_Font**>(lua_touserdata(L, index));
	}
}


/* Create a meta-table whit __gc meta-method to recycle TTF_Font* */
inline int CreateFontGC(lua_State* L)
{
	lua_newtable(L);
	lua_pushcfunction(L, [](lua_State* L)->int{
		TTF_Font* ptr = *static_cast<TTF_Font**>(lua_touserdata(L, 1));
		// #ifdef SDLUNA_DEBUG
		// 	SDL_Log("GC : TTF_CloseFont(%p)", ptr);
		// #endif
		TTF_CloseFont(ptr);
		return 0;
	});
	lua_setfield(L, -2, "__gc");
	lua_setfield(L, LUA_REGISTRYINDEX, SDLUNA_FONT_GC);

	return 0;
}

#endif