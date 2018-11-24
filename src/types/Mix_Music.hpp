#ifndef SDLUNA_MUSIC_H
#define SDLUNA_MUSIC_H

#define SDLUNA_MUSIC_GC "SDLUNA_MUSIC_GC"
inline int CreateMusicGC(lua_State* L);

/* Write Mix_Music* to Lua */
template<> 
inline void luaMagic_write(lua_State* L, Mix_Music* value)
{	
	/* Create GC meta-table only once */
	static int gc = CreateMusicGC(L);

	if(value == nullptr)
	{
		lua_pushnil(L);
	}
	else
	{
		Mix_Music** ptr = static_cast<Mix_Music**>(lua_newuserdata(L, sizeof(value)));
		*ptr = value;
		
		/* Set __gc meta-method */
		lua_getfield(L, LUA_REGISTRYINDEX, SDLUNA_MUSIC_GC);
		lua_setmetatable(L, -2);
	}
}

/* Read Mix_Music* from Lua */
template<>
inline Mix_Music* luaMagic_read<Mix_Music*>(lua_State* L, int index)
{
	if(lua_isnoneornil(L, index))
	{
		return nullptr;
	}
	else
	{
		return *static_cast<Mix_Music**>(lua_touserdata(L, index));
	}
}


/* Create a meta-table whit __gc meta-method to recycle Mix_Music* */
inline int CreateMusicGC(lua_State* L)
{
	lua_newtable(L);
	lua_pushcfunction(L, [](lua_State* L)->int{
		Mix_Music* ptr = *static_cast<Mix_Music**>(lua_touserdata(L, 1));
		// #ifdef SDLUNA_DEBUG
		// 	SDL_Log("GC : Mix_FreeMusic(%p)", ptr);
		// #endif
		Mix_FreeMusic(ptr);
		return 0;
	});
	lua_setfield(L, -2, "__gc");
	lua_setfield(L, LUA_REGISTRYINDEX, SDLUNA_MUSIC_GC);

	return 0;
}

#endif