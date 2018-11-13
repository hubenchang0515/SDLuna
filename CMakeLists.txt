# CMake file for project SDLuna
# https://github.com/hubenchang0515/SDLuna
# mailto://hubenchang0515@outlook.com

# CMake 2.8+
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

# Release Version
SET(CMAKE_BUILDTYPE release)

# C++11 standard
SET(CMAKE_CXX_STANDARD 11)

# Link libSDL2 and liblua
LINK_LIBRARIES(SDL2 lua HB)

# Check dependence
include(CheckIncludeFileCXX)
SET(CMAKE_REQUIRED_FLAGS "-std=c++11 -shared")
CHECK_INCLUDE_FILE_CXX("luaMagic/luaMagic.hpp" luaMagic_exist)
CHECK_INCLUDE_FILE_CXX("SDL2/SDL.h" SDL2_exist)
CHECK_INCLUDE_FILE_CXX("lua.hpp" lua_exist)
CHECK_INCLUDE_FILE_CXX("HB/brush.h" HB_exist)

# Show message
IF(NOT luaMagic_exist)
	MESSAGE(FATAL_ERROR "luaMagic(https://github.com/hubenchang0515/Lua-Magic) is not exist.")
ENDIF()
	
IF(NOT SDL2_exist)
	MESSAGE(FATAL_ERROR "SDL2(https://www.libsdl.org/) is not exist.")
ENDIF()

IF(NOT lua_exist)
	MESSAGE(FATAL_ERROR "Lua(http://www.lua.org/) is not exist.")
ENDIF()

IF(NOT HB_exist)
	MESSAGE(FATAL_ERROR "Hide on Brush(https://github.com/hubenchang0515/Hide-on-Brush) is not exist.")
ENDIF()

# include header file path
INCLUDE_DIRECTORIES(src)
INCLUDE_DIRECTORIES(src/types)

# source file path
AUX_SOURCE_DIRECTORY(src SRC)

# Target
ADD_LIBRARY(sdluna SHARED ${SRC})

