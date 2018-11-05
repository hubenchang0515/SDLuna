#ifndef SDLUNA_SDL_EVENT_H
#define SDLUNA_SDL_EVENT_H

/* Write SDL_Event* to Lua */
template<> 
inline void luaMagic_write<SDL_Event*>(lua_State* L, SDL_Event* value)
{
#ifdef SDLUNA_DEBUG
	SDL_Log("Write SDL_Event* to Lua : %p \n", value);
#endif
	//lua_pushlightuserdata(L, static_cast<void*>(value));
	
	/* Create a table to save event */
	lua_newtable(L);
	
	/* Store values */
	lua_pushstring(L, "type");
	lua_pushinteger(L, value->type);
	lua_settable(L,-3);
	
	switch(value->type)
	{
	case SDL_QUIT:
		lua_pushstring(L, "timestamp");
		lua_pushinteger(L, value->quit.timestamp);
		lua_settable(L,-3);
		break;
	}
	
	
}

/* Read SDL_Event* from Lua */
template<>
inline SDL_Event* luaMagic_read<SDL_Event*>(lua_State* L, int index)
{
	void* value = lua_touserdata(L, index);
#ifdef SDLUNA_DEBUG
	SDL_Log("Read SDL_Event* from Lua : %p \n", value);
#endif
	return static_cast<SDL_Event*>(value);
}

#endif