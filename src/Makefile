sdluna: lua.o sdluna_vedio.o sdluna_render.o sdluna_event.o
	g++ -o sdluna lua.o sdluna_vedio.o sdluna_render.o sdluna_event.o -llua -lmingw32 -lSDL2main -lSDL2 -std=c++11 -O2
	
lua.o: lua.c sdluna.hpp
	g++ -c lua.c -std=c++11 -O2
	
sdluna_vedio.o: sdluna_vedio.cpp sdluna.hpp
	g++ -c sdluna_vedio.cpp -std=c++11 -O2 -DSDLUNA_DEBUG
	
sdluna_render.o: sdluna_render.cpp sdluna.hpp
	g++ -c sdluna_render.cpp -std=c++11 -O2 -DSDLUNA_DEBUG
	
sdluna_event.o: sdluna_event.cpp sdluna.hpp
	g++ -c sdluna_event.cpp -std=c++11 -O2 -DSDLUNA_DEBUG
	
clean:
	rm *.o