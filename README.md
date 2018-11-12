# SDLuna
A SDL2 bind for Lua  

## Note : Alpha Version

## Install
```bash
cmake .
make
./install.lua
```
* MinGW may need type``cmake -G"MinGW Makefiles" .``
* Windows may need type `lua install.lua`
* Linux may need use ``chmod`` and ``sudo`` 
* If you meet ``/usr/bin/ld: /usr/local/lib/liblua.a : can not be used when making a shared object; recompile with -fPIC`` in Linux, just do like this.
```bash
cd $LUA_SRC
gcc -c -std=c99 -O2 *.c
rm lua.o luac.o
ar liblua.a *.o
cp liblua.a /usr/local/lib/liblua.a
```

  
## Environment   
* C++11  
  
## Dependence  
* [SDL2.0](https://www.libsdl.org/)  
* [Lua5.3](http://www.lua.org/)  
* [Lua Magic](https://github.com/hubenchang0515/Lua-Magic)  

## Document
* [SDLuna Manual](doc)  

### You may also refer to :  
* [SDL2.0 Wiki](http://wiki.libsdl.org/APIByCategory)  
* [Lua 5.3 Reference Manual](http://www.lua.org/manual/5.3/)  

