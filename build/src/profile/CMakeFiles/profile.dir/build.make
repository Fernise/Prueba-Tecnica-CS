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
include src/profile/CMakeFiles/profile.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/profile/CMakeFiles/profile.dir/compiler_depend.make

# Include the progress variables for this target.
include src/profile/CMakeFiles/profile.dir/progress.make

# Include the compile flags for this target's objects.
include src/profile/CMakeFiles/profile.dir/flags.make

src/profile/CMakeFiles/profile.dir/profile.cc.obj: src/profile/CMakeFiles/profile.dir/flags.make
src/profile/CMakeFiles/profile.dir/profile.cc.obj: src/profile/CMakeFiles/profile.dir/includes_CXX.rsp
src/profile/CMakeFiles/profile.dir/profile.cc.obj: C:/Users/Fernando/Documents/Common_Solutions/src/profile/profile.cc
src/profile/CMakeFiles/profile.dir/profile.cc.obj: src/profile/CMakeFiles/profile.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/Fernando/Documents/Common_Solutions/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/profile/CMakeFiles/profile.dir/profile.cc.obj"
	cd C:/Users/Fernando/Documents/Common_Solutions/build/src/profile && C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/profile/CMakeFiles/profile.dir/profile.cc.obj -MF CMakeFiles/profile.dir/profile.cc.obj.d -o CMakeFiles/profile.dir/profile.cc.obj -c C:/Users/Fernando/Documents/Common_Solutions/src/profile/profile.cc

src/profile/CMakeFiles/profile.dir/profile.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/profile.dir/profile.cc.i"
	cd C:/Users/Fernando/Documents/Common_Solutions/build/src/profile && C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/Fernando/Documents/Common_Solutions/src/profile/profile.cc > CMakeFiles/profile.dir/profile.cc.i

src/profile/CMakeFiles/profile.dir/profile.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/profile.dir/profile.cc.s"
	cd C:/Users/Fernando/Documents/Common_Solutions/build/src/profile && C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/Fernando/Documents/Common_Solutions/src/profile/profile.cc -o CMakeFiles/profile.dir/profile.cc.s

# Object files for target profile
profile_OBJECTS = \
"CMakeFiles/profile.dir/profile.cc.obj"

# External object files for target profile
profile_EXTERNAL_OBJECTS =

src/profile/libprofile.dll: src/profile/CMakeFiles/profile.dir/profile.cc.obj
src/profile/libprofile.dll: src/profile/CMakeFiles/profile.dir/build.make
src/profile/libprofile.dll: src/profile/CMakeFiles/profile.dir/linkLibs.rsp
src/profile/libprofile.dll: src/profile/CMakeFiles/profile.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:/Users/Fernando/Documents/Common_Solutions/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libprofile.dll"
	cd C:/Users/Fernando/Documents/Common_Solutions/build/src/profile && C:/Python310/Lib/site-packages/cmake/data/bin/cmake.exe -E rm -f CMakeFiles/profile.dir/objects.a
	cd C:/Users/Fernando/Documents/Common_Solutions/build/src/profile && C:/msys64/mingw64/bin/ar.exe qc CMakeFiles/profile.dir/objects.a @CMakeFiles/profile.dir/objects1.rsp
	cd C:/Users/Fernando/Documents/Common_Solutions/build/src/profile && C:/msys64/mingw64/bin/g++.exe -g -shared -o libprofile.dll -Wl,--out-implib,libprofile.dll.a -Wl,--major-image-version,0,--minor-image-version,0 -Wl,--whole-archive CMakeFiles/profile.dir/objects.a -Wl,--no-whole-archive @CMakeFiles/profile.dir/linkLibs.rsp

# Rule to build all files generated by this target.
src/profile/CMakeFiles/profile.dir/build: src/profile/libprofile.dll
.PHONY : src/profile/CMakeFiles/profile.dir/build

src/profile/CMakeFiles/profile.dir/clean:
	cd C:/Users/Fernando/Documents/Common_Solutions/build/src/profile && $(CMAKE_COMMAND) -P CMakeFiles/profile.dir/cmake_clean.cmake
.PHONY : src/profile/CMakeFiles/profile.dir/clean

src/profile/CMakeFiles/profile.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" C:/Users/Fernando/Documents/Common_Solutions C:/Users/Fernando/Documents/Common_Solutions/src/profile C:/Users/Fernando/Documents/Common_Solutions/build C:/Users/Fernando/Documents/Common_Solutions/build/src/profile C:/Users/Fernando/Documents/Common_Solutions/build/src/profile/CMakeFiles/profile.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/profile/CMakeFiles/profile.dir/depend

