# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.11

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Project\SDLuna

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Project\SDLuna

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	"C:\Program Files\CMake\bin\cmake-gui.exe" -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	"C:\Program Files\CMake\bin\cmake.exe" -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start C:\Project\SDLuna\CMakeFiles C:\Project\SDLuna\CMakeFiles\progress.marks
	$(MAKE) -f CMakeFiles\Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start C:\Project\SDLuna\CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles\Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named sdluna

# Build rule for target.
sdluna: cmake_check_build_system
	$(MAKE) -f CMakeFiles\Makefile2 sdluna
.PHONY : sdluna

# fast build rule for target.
sdluna/fast:
	$(MAKE) -f CMakeFiles\sdluna.dir\build.make CMakeFiles/sdluna.dir/build
.PHONY : sdluna/fast

src/main.obj: src/main.cpp.obj

.PHONY : src/main.obj

# target to build an object file
src/main.cpp.obj:
	$(MAKE) -f CMakeFiles\sdluna.dir\build.make CMakeFiles/sdluna.dir/src/main.cpp.obj
.PHONY : src/main.cpp.obj

src/main.i: src/main.cpp.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) -f CMakeFiles\sdluna.dir\build.make CMakeFiles/sdluna.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) -f CMakeFiles\sdluna.dir\build.make CMakeFiles/sdluna.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

src/sdluna.obj: src/sdluna.cpp.obj

.PHONY : src/sdluna.obj

# target to build an object file
src/sdluna.cpp.obj:
	$(MAKE) -f CMakeFiles\sdluna.dir\build.make CMakeFiles/sdluna.dir/src/sdluna.cpp.obj
.PHONY : src/sdluna.cpp.obj

src/sdluna.i: src/sdluna.cpp.i

.PHONY : src/sdluna.i

# target to preprocess a source file
src/sdluna.cpp.i:
	$(MAKE) -f CMakeFiles\sdluna.dir\build.make CMakeFiles/sdluna.dir/src/sdluna.cpp.i
.PHONY : src/sdluna.cpp.i

src/sdluna.s: src/sdluna.cpp.s

.PHONY : src/sdluna.s

# target to generate assembly for a file
src/sdluna.cpp.s:
	$(MAKE) -f CMakeFiles\sdluna.dir\build.make CMakeFiles/sdluna.dir/src/sdluna.cpp.s
.PHONY : src/sdluna.cpp.s

src/sdluna_event.obj: src/sdluna_event.cpp.obj

.PHONY : src/sdluna_event.obj

# target to build an object file
src/sdluna_event.cpp.obj:
	$(MAKE) -f CMakeFiles\sdluna.dir\build.make CMakeFiles/sdluna.dir/src/sdluna_event.cpp.obj
.PHONY : src/sdluna_event.cpp.obj

src/sdluna_event.i: src/sdluna_event.cpp.i

.PHONY : src/sdluna_event.i

# target to preprocess a source file
src/sdluna_event.cpp.i:
	$(MAKE) -f CMakeFiles\sdluna.dir\build.make CMakeFiles/sdluna.dir/src/sdluna_event.cpp.i
.PHONY : src/sdluna_event.cpp.i

src/sdluna_event.s: src/sdluna_event.cpp.s

.PHONY : src/sdluna_event.s

# target to generate assembly for a file
src/sdluna_event.cpp.s:
	$(MAKE) -f CMakeFiles\sdluna.dir\build.make CMakeFiles/sdluna.dir/src/sdluna_event.cpp.s
.PHONY : src/sdluna_event.cpp.s

src/sdluna_render.obj: src/sdluna_render.cpp.obj

.PHONY : src/sdluna_render.obj

# target to build an object file
src/sdluna_render.cpp.obj:
	$(MAKE) -f CMakeFiles\sdluna.dir\build.make CMakeFiles/sdluna.dir/src/sdluna_render.cpp.obj
.PHONY : src/sdluna_render.cpp.obj

src/sdluna_render.i: src/sdluna_render.cpp.i

.PHONY : src/sdluna_render.i

# target to preprocess a source file
src/sdluna_render.cpp.i:
	$(MAKE) -f CMakeFiles\sdluna.dir\build.make CMakeFiles/sdluna.dir/src/sdluna_render.cpp.i
.PHONY : src/sdluna_render.cpp.i

src/sdluna_render.s: src/sdluna_render.cpp.s

.PHONY : src/sdluna_render.s

# target to generate assembly for a file
src/sdluna_render.cpp.s:
	$(MAKE) -f CMakeFiles\sdluna.dir\build.make CMakeFiles/sdluna.dir/src/sdluna_render.cpp.s
.PHONY : src/sdluna_render.cpp.s

src/sdluna_vedio.obj: src/sdluna_vedio.cpp.obj

.PHONY : src/sdluna_vedio.obj

# target to build an object file
src/sdluna_vedio.cpp.obj:
	$(MAKE) -f CMakeFiles\sdluna.dir\build.make CMakeFiles/sdluna.dir/src/sdluna_vedio.cpp.obj
.PHONY : src/sdluna_vedio.cpp.obj

src/sdluna_vedio.i: src/sdluna_vedio.cpp.i

.PHONY : src/sdluna_vedio.i

# target to preprocess a source file
src/sdluna_vedio.cpp.i:
	$(MAKE) -f CMakeFiles\sdluna.dir\build.make CMakeFiles/sdluna.dir/src/sdluna_vedio.cpp.i
.PHONY : src/sdluna_vedio.cpp.i

src/sdluna_vedio.s: src/sdluna_vedio.cpp.s

.PHONY : src/sdluna_vedio.s

# target to generate assembly for a file
src/sdluna_vedio.cpp.s:
	$(MAKE) -f CMakeFiles\sdluna.dir\build.make CMakeFiles/sdluna.dir/src/sdluna_vedio.cpp.s
.PHONY : src/sdluna_vedio.cpp.s

# Help Target
help:
	@echo The following are some of the valid targets for this Makefile:
	@echo ... all (the default if no target is provided)
	@echo ... clean
	@echo ... depend
	@echo ... edit_cache
	@echo ... sdluna
	@echo ... rebuild_cache
	@echo ... src/main.obj
	@echo ... src/main.i
	@echo ... src/main.s
	@echo ... src/sdluna.obj
	@echo ... src/sdluna.i
	@echo ... src/sdluna.s
	@echo ... src/sdluna_event.obj
	@echo ... src/sdluna_event.i
	@echo ... src/sdluna_event.s
	@echo ... src/sdluna_render.obj
	@echo ... src/sdluna_render.i
	@echo ... src/sdluna_render.s
	@echo ... src/sdluna_vedio.obj
	@echo ... src/sdluna_vedio.i
	@echo ... src/sdluna_vedio.s
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 0
.PHONY : cmake_check_build_system
