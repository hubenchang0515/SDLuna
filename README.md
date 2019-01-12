# ![SDLuna](logo.png)
A Lua graphics library based on SDL  

## Alpha Version 1.0

## Install
```bash
cmake .
make
./install.lua
```
* MinGW may need type ``cmake -G"MinGW Makefiles" .``
* Windows may need type `lua install.lua`
* Linux may need use ``chmod`` and ``sudo`` 
* If you meet ``/usr/bin/ld: /usr/local/lib/liblua.a : can not be used when making a shared object; recompile with -fPIC`` in Linux, just compile Lua like this:
```bash
cd $LUA_SRC
gcc -c -std=c99 -O2 -fPIC *.c
rm lua.o luac.o
ar rc liblua.a *.o
cp liblua.a /usr/local/lib/liblua.a
```

  
## Environment   
* C++11  
  
## Dependence  
* [SDL 2.0](https://www.libsdl.org/)  
* [SDL_image 2.0](https://www.libsdl.org/projects/SDL_image/)
* [SDL_mixer 2.0](https://www.libsdl.org/projects/SDL_mixer/)
* [SDL_ttf 2.0](https://www.libsdl.org/projects/SDL_ttf/)
* [Lua 5.3](http://www.lua.org/)  
* [Lua Magic](https://github.com/hubenchang0515/Lua-Magic)  
* [Hide on Brush](https://github.com/hubenchang0515/Hide-on-Brush)

## Document
* [SDLuna Manual](doc)  

### You may also refer to :  
* [SDL 2.0 Wiki](http://wiki.libsdl.org/APIByCategory)  
* [SDL_image 2.0 Documentation](https://www.libsdl.org/projects/SDL_image/docs/index.html)
* [SDL_mixer 2.0 Documentation](https://www.libsdl.org/projects/SDL_mixer/docs/index.html)
* [SDL_ttf 2.0 Documentation](https://www.libsdl.org/projects/SDL_ttf/docs/index.html)
* [Lua 5.3 Reference Manual](http://www.lua.org/manual/5.3/)  

