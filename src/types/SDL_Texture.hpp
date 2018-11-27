#ifndef SDLUNA_TEXTURE_H
#define SDLUNA_TEXTURE_H

#define SDLUNA_TEXTURE_GC "SDLUNA_TEXTURE_GC"
inline int CreateTextureGC(lua_State* L);

/* Write SDL_Texture* to Lua */
template<> 
inline void luaMagic_write(lua_State* L, SDL_Texture* value)
{	
	/* Create GC meta-table only once */
	static int gc = CreateTextureGC(L);

	if(value == nullptr)
	{
		lua_pushnil(L);
	}
	else
	{
		SDL_Texture** ptr = static_cast<SDL_Texture**>(lua_newuserdata(L, sizeof(value)));
		*ptr = value;
		
		/* Set __gc meta-method */
		lua_getfield(L, LUA_REGISTRYINDEX, SDLUNA_TEXTURE_GC);
		lua_setmetatable(L, -2);
	}
}

/* Read SDL_Texture* from Lua */
template<>
inline SDL_Texture* luaMagic_read<SDL_Texture*>(lua_State* L, int index)
{
	if(lua_isnoneornil(L, index))
	{
		luaL_error(L, "bad argument #%d (SDL_Texture* expected, got nil)", index);
		return nullptr;
	}
	else
	{
		return *static_cast<SDL_Texture**>(lua_touserdata(L, index));
	}
}


/* Create a meta-table whit __gc meta-method to recycle SDL_Texture* */
inline int CreateTextureGC(lua_State* L)
{
	lua_newtable(L);
	lua_pushcfunction(L, [](lua_State* L)->int{
		SDL_Texture* ptr = *static_cast<SDL_Texture**>(lua_touserdata(L, 1));
		// #ifdef SDLUNA_DEBUG
		// 	SDL_Log("GC : SDL_DestroyTexture(%p)", ptr);
		// #endif
		SDL_DestroyTexture(ptr);
		return 0;
	});
	lua_setfield(L, -2, "__gc");
	lua_setfield(L, LUA_REGISTRYINDEX, SDLUNA_TEXTURE_GC);

	return 0;
}

#endif