# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = C:/Python310/Lib/site-packages/cmake/data/bin/cmake.exe

# The command to remove a file.
RM = C:/Python310/Lib/site-packages/cmake/data/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:/Users/Fernando/Documents/Common_Solutions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:/Users/Fernando/Documents/Common_Solutions/build

# Include any dependencies generated for this target.
include src/menu/CMakeFiles/menu.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/menu/CMakeFiles/menu.dir/compiler_depend.make

# Include the progress variables for this target.
include src/menu/CMakeFiles/menu.dir/progress.make

# Include the compile flags for this target's objects.
include src/menu/CMakeFiles/menu.dir/flags.make

src/menu/CMakeFiles/menu.dir/menu.cc.obj: src/menu/CMakeFiles/menu.dir/flags.make
src/menu/CMakeFiles/menu.dir/menu.cc.obj: src/menu/CMakeFiles/menu.dir/includes_CXX.rsp
src/menu/CMakeFiles/menu.dir/menu.cc.obj: C:/Users/Fernando/Documents/Common_Solutions/src/menu/menu.cc
src/menu/CMakeFiles/menu.dir/menu.cc.obj: src/menu/CMakeFiles/menu.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/Fernando/Documents/Common_Solutions/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/menu/CMakeFiles/menu.dir/menu.cc.obj"
	cd C:/Users/Fernando/Documents/Common_Solutions/build/src/menu && C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/menu/CMakeFiles/menu.dir/menu.cc.obj -MF CMakeFiles/menu.dir/menu.cc.obj.d -o CMakeFiles/menu.dir/menu.cc.obj -c C:/Users/Fernando/Documents/Common_Solutions/src/menu/menu.cc

src/menu/CMakeFiles/menu.dir/menu.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/menu.dir/menu.cc.i"
	cd C:/Users/Fernando/Documents/Common_Solutions/build/src/menu && C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/Fernando/Documents/Common_Solutions/src/menu/menu.cc > CMakeFiles/menu.dir/menu.cc.i

src/menu/CMakeFiles/menu.dir/menu.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/menu.dir/menu.cc.s"
	cd C:/Users/Fernando/Documents/Common_Solutions/build/src/menu && C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/Fernando/Documents/Common_Solutions/src/menu/menu.cc -o CMakeFiles/menu.dir/menu.cc.s

# Object files for target menu
menu_OBJECTS = \
"CMakeFiles/menu.dir/menu.cc.obj"

# External object files for target menu
menu_EXTERNAL_OBJECTS =

src/menu/libmenu.dll: src/menu/CMakeFiles/menu.dir/menu.cc.obj
src/menu/libmenu.dll: src/menu/CMakeFiles/menu.dir/build.make
src/menu/libmenu.dll: src/menu/CMakeFiles/menu.dir/linkLibs.rsp
src/menu/libmenu.dll: src/menu/CMakeFiles/menu.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:/Users/Fernando/Documents/Common_Solutions/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libmenu.dll"
	cd C:/Users/Fernando/Documents/Common_Solutions/build/src/menu && C:/Python310/Lib/site-packages/cmake/data/bin/cmake.exe -E rm -f CMakeFiles/menu.dir/objects.a
	cd C:/Users/Fernando/Documents/Common_Solutions/build/src/menu && C:/msys64/mingw64/bin/ar.exe qc CMakeFiles/menu.dir/objects.a @CMakeFiles/menu.dir/objects1.rsp
	cd C:/Users/Fernando/Documents/Common_Solutions/build/src/menu && C:/msys64/mingw64/bin/g++.exe -g -shared -o libmenu.dll -Wl,--out-implib,libmenu.dll.a -Wl,--major-image-version,0,--minor-image-version,0 -Wl,--whole-archive CMakeFiles/menu.dir/objects.a -Wl,--no-whole-archive @CMakeFiles/menu.dir/linkLibs.rsp

# Rule to build all files generated by this target.
src/menu/CMakeFiles/menu.dir/build: src/menu/libmenu.dll
.PHONY : src/menu/CMakeFiles/menu.dir/build

src/menu/CMakeFiles/menu.dir/clean:
	cd C:/Users/Fernando/Documents/Common_Solutions/build/src/menu && $(CMAKE_COMMAND) -P CMakeFiles/menu.dir/cmake_clean.cmake
.PHONY : src/menu/CMakeFiles/menu.dir/clean

src/menu/CMakeFiles/menu.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" C:/Users/Fernando/Documents/Common_Solutions C:/Users/Fernando/Documents/Common_Solutions/src/menu C:/Users/Fernando/Documents/Common_Solutions/build C:/Users/Fernando/Documents/Common_Solutions/build/src/menu C:/Users/Fernando/Documents/Common_Solutions/build/src/menu/CMakeFiles/menu.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/menu/CMakeFiles/menu.dir/depend
