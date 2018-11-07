# CMake file for project SDLuna
# https://github.com/hubenchang0515/SDLuna
# mailto://hubenchang0515@outlook.com

CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
SET(CMAKE_BUILDTYPE release)
ADD_DEFINITIONS(-std=c++11)
LINK_LIBRARIES(SDL2 lua)

# include header file path
INCLUDE_DIRECTORIES(src/types)

# source file path
AUX_SOURCE_DIRECTORY(src SRC)

# Target
ADD_LIBRARY(sdluna SHARED ${SRC})