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
include CMakeFiles/Common_Solutions.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Common_Solutions.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Common_Solutions.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Common_Solutions.dir/flags.make

CMakeFiles/Common_Solutions.dir/src/main/main.cc.obj: CMakeFiles/Common_Solutions.dir/flags.make
CMakeFiles/Common_Solutions.dir/src/main/main.cc.obj: CMakeFiles/Common_Solutions.dir/includes_CXX.rsp
CMakeFiles/Common_Solutions.dir/src/main/main.cc.obj: C:/Users/Fernando/Documents/Common_Solutions/src/main/main.cc
CMakeFiles/Common_Solutions.dir/src/main/main.cc.obj: CMakeFiles/Common_Solutions.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/Fernando/Documents/Common_Solutions/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Common_Solutions.dir/src/main/main.cc.obj"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Common_Solutions.dir/src/main/main.cc.obj -MF CMakeFiles/Common_Solutions.dir/src/main/main.cc.obj.d -o CMakeFiles/Common_Solutions.dir/src/main/main.cc.obj -c C:/Users/Fernando/Documents/Common_Solutions/src/main/main.cc

CMakeFiles/Common_Solutions.dir/src/main/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Common_Solutions.dir/src/main/main.cc.i"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/Fernando/Documents/Common_Solutions/src/main/main.cc > CMakeFiles/Common_Solutions.dir/src/main/main.cc.i

CMakeFiles/Common_Solutions.dir/src/main/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Common_Solutions.dir/src/main/main.cc.s"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/Fernando/Documents/Common_Solutions/src/main/main.cc -o CMakeFiles/Common_Solutions.dir/src/main/main.cc.s

CMakeFiles/Common_Solutions.dir/src/client/client.cc.obj: CMakeFiles/Common_Solutions.dir/flags.make
CMakeFiles/Common_Solutions.dir/src/client/client.cc.obj: CMakeFiles/Common_Solutions.dir/includes_CXX.rsp
CMakeFiles/Common_Solutions.dir/src/client/client.cc.obj: C:/Users/Fernando/Documents/Common_Solutions/src/client/client.cc
CMakeFiles/Common_Solutions.dir/src/client/client.cc.obj: CMakeFiles/Common_Solutions.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/Fernando/Documents/Common_Solutions/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Common_Solutions.dir/src/client/client.cc.obj"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Common_Solutions.dir/src/client/client.cc.obj -MF CMakeFiles/Common_Solutions.dir/src/client/client.cc.obj.d -o CMakeFiles/Common_Solutions.dir/src/client/client.cc.obj -c C:/Users/Fernando/Documents/Common_Solutions/src/client/client.cc

CMakeFiles/Common_Solutions.dir/src/client/client.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Common_Solutions.dir/src/client/client.cc.i"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/Fernando/Documents/Common_Solutions/src/client/client.cc > CMakeFiles/Common_Solutions.dir/src/client/client.cc.i

CMakeFiles/Common_Solutions.dir/src/client/client.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Common_Solutions.dir/src/client/client.cc.s"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/Fernando/Documents/Common_Solutions/src/client/client.cc -o CMakeFiles/Common_Solutions.dir/src/client/client.cc.s

CMakeFiles/Common_Solutions.dir/src/client_repository/client_repository.cc.obj: CMakeFiles/Common_Solutions.dir/flags.make
CMakeFiles/Common_Solutions.dir/src/client_repository/client_repository.cc.obj: CMakeFiles/Common_Solutions.dir/includes_CXX.rsp
CMakeFiles/Common_Solutions.dir/src/client_repository/client_repository.cc.obj: C:/Users/Fernando/Documents/Common_Solutions/src/client_repository/client_repository.cc
CMakeFiles/Common_Solutions.dir/src/client_repository/client_repository.cc.obj: CMakeFiles/Common_Solutions.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/Fernando/Documents/Common_Solutions/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Common_Solutions.dir/src/client_repository/client_repository.cc.obj"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Common_Solutions.dir/src/client_repository/client_repository.cc.obj -MF CMakeFiles/Common_Solutions.dir/src/client_repository/client_repository.cc.obj.d -o CMakeFiles/Common_Solutions.dir/src/client_repository/client_repository.cc.obj -c C:/Users/Fernando/Documents/Common_Solutions/src/client_repository/client_repository.cc

CMakeFiles/Common_Solutions.dir/src/client_repository/client_repository.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Common_Solutions.dir/src/client_repository/client_repository.cc.i"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/Fernando/Documents/Common_Solutions/src/client_repository/client_repository.cc > CMakeFiles/Common_Solutions.dir/src/client_repository/client_repository.cc.i

CMakeFiles/Common_Solutions.dir/src/client_repository/client_repository.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Common_Solutions.dir/src/client_repository/client_repository.cc.s"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/Fernando/Documents/Common_Solutions/src/client_repository/client_repository.cc -o CMakeFiles/Common_Solutions.dir/src/client_repository/client_repository.cc.s

CMakeFiles/Common_Solutions.dir/src/supplier/supplier.cc.obj: CMakeFiles/Common_Solutions.dir/flags.make
CMakeFiles/Common_Solutions.dir/src/supplier/supplier.cc.obj: CMakeFiles/Common_Solutions.dir/includes_CXX.rsp
CMakeFiles/Common_Solutions.dir/src/supplier/supplier.cc.obj: C:/Users/Fernando/Documents/Common_Solutions/src/supplier/supplier.cc
CMakeFiles/Common_Solutions.dir/src/supplier/supplier.cc.obj: CMakeFiles/Common_Solutions.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/Fernando/Documents/Common_Solutions/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Common_Solutions.dir/src/supplier/supplier.cc.obj"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Common_Solutions.dir/src/supplier/supplier.cc.obj -MF CMakeFiles/Common_Solutions.dir/src/supplier/supplier.cc.obj.d -o CMakeFiles/Common_Solutions.dir/src/supplier/supplier.cc.obj -c C:/Users/Fernando/Documents/Common_Solutions/src/supplier/supplier.cc

CMakeFiles/Common_Solutions.dir/src/supplier/supplier.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Common_Solutions.dir/src/supplier/supplier.cc.i"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/Fernando/Documents/Common_Solutions/src/supplier/supplier.cc > CMakeFiles/Common_Solutions.dir/src/supplier/supplier.cc.i

CMakeFiles/Common_Solutions.dir/src/supplier/supplier.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Common_Solutions.dir/src/supplier/supplier.cc.s"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/Fernando/Documents/Common_Solutions/src/supplier/supplier.cc -o CMakeFiles/Common_Solutions.dir/src/supplier/supplier.cc.s

CMakeFiles/Common_Solutions.dir/src/supplier_repository/supplier_repository.cc.obj: CMakeFiles/Common_Solutions.dir/flags.make
CMakeFiles/Common_Solutions.dir/src/supplier_repository/supplier_repository.cc.obj: CMakeFiles/Common_Solutions.dir/includes_CXX.rsp
CMakeFiles/Common_Solutions.dir/src/supplier_repository/supplier_repository.cc.obj: C:/Users/Fernando/Documents/Common_Solutions/src/supplier_repository/supplier_repository.cc
CMakeFiles/Common_Solutions.dir/src/supplier_repository/supplier_repository.cc.obj: CMakeFiles/Common_Solutions.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/Fernando/Documents/Common_Solutions/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Common_Solutions.dir/src/supplier_repository/supplier_repository.cc.obj"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Common_Solutions.dir/src/supplier_repository/supplier_repository.cc.obj -MF CMakeFiles/Common_Solutions.dir/src/supplier_repository/supplier_repository.cc.obj.d -o CMakeFiles/Common_Solutions.dir/src/supplier_repository/supplier_repository.cc.obj -c C:/Users/Fernando/Documents/Common_Solutions/src/supplier_repository/supplier_repository.cc

CMakeFiles/Common_Solutions.dir/src/supplier_repository/supplier_repository.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Common_Solutions.dir/src/supplier_repository/supplier_repository.cc.i"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/Fernando/Documents/Common_Solutions/src/supplier_repository/supplier_repository.cc > CMakeFiles/Common_Solutions.dir/src/supplier_repository/supplier_repository.cc.i

CMakeFiles/Common_Solutions.dir/src/supplier_repository/supplier_repository.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Common_Solutions.dir/src/supplier_repository/supplier_repository.cc.s"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/Fernando/Documents/Common_Solutions/src/supplier_repository/supplier_repository.cc -o CMakeFiles/Common_Solutions.dir/src/supplier_repository/supplier_repository.cc.s

CMakeFiles/Common_Solutions.dir/src/business/business.cc.obj: CMakeFiles/Common_Solutions.dir/flags.make
CMakeFiles/Common_Solutions.dir/src/business/business.cc.obj: CMakeFiles/Common_Solutions.dir/includes_CXX.rsp
CMakeFiles/Common_Solutions.dir/src/business/business.cc.obj: C:/Users/Fernando/Documents/Common_Solutions/src/business/business.cc
CMakeFiles/Common_Solutions.dir/src/business/business.cc.obj: CMakeFiles/Common_Solutions.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/Fernando/Documents/Common_Solutions/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Common_Solutions.dir/src/business/business.cc.obj"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Common_Solutions.dir/src/business/business.cc.obj -MF CMakeFiles/Common_Solutions.dir/src/business/business.cc.obj.d -o CMakeFiles/Common_Solutions.dir/src/business/business.cc.obj -c C:/Users/Fernando/Documents/Common_Solutions/src/business/business.cc

CMakeFiles/Common_Solutions.dir/src/business/business.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Common_Solutions.dir/src/business/business.cc.i"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/Fernando/Documents/Common_Solutions/src/business/business.cc > CMakeFiles/Common_Solutions.dir/src/business/business.cc.i

CMakeFiles/Common_Solutions.dir/src/business/business.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Common_Solutions.dir/src/business/business.cc.s"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/Fernando/Documents/Common_Solutions/src/business/business.cc -o CMakeFiles/Common_Solutions.dir/src/business/business.cc.s

CMakeFiles/Common_Solutions.dir/src/menu/menu.cc.obj: CMakeFiles/Common_Solutions.dir/flags.make
CMakeFiles/Common_Solutions.dir/src/menu/menu.cc.obj: CMakeFiles/Common_Solutions.dir/includes_CXX.rsp
CMakeFiles/Common_Solutions.dir/src/menu/menu.cc.obj: C:/Users/Fernando/Documents/Common_Solutions/src/menu/menu.cc
CMakeFiles/Common_Solutions.dir/src/menu/menu.cc.obj: CMakeFiles/Common_Solutions.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/Fernando/Documents/Common_Solutions/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Common_Solutions.dir/src/menu/menu.cc.obj"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Common_Solutions.dir/src/menu/menu.cc.obj -MF CMakeFiles/Common_Solutions.dir/src/menu/menu.cc.obj.d -o CMakeFiles/Common_Solutions.dir/src/menu/menu.cc.obj -c C:/Users/Fernando/Documents/Common_Solutions/src/menu/menu.cc

CMakeFiles/Common_Solutions.dir/src/menu/menu.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Common_Solutions.dir/src/menu/menu.cc.i"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/Fernando/Documents/Common_Solutions/src/menu/menu.cc > CMakeFiles/Common_Solutions.dir/src/menu/menu.cc.i

CMakeFiles/Common_Solutions.dir/src/menu/menu.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Common_Solutions.dir/src/menu/menu.cc.s"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/Fernando/Documents/Common_Solutions/src/menu/menu.cc -o CMakeFiles/Common_Solutions.dir/src/menu/menu.cc.s

CMakeFiles/Common_Solutions.dir/src/utility/utility.cc.obj: CMakeFiles/Common_Solutions.dir/flags.make
CMakeFiles/Common_Solutions.dir/src/utility/utility.cc.obj: CMakeFiles/Common_Solutions.dir/includes_CXX.rsp
CMakeFiles/Common_Solutions.dir/src/utility/utility.cc.obj: C:/Users/Fernando/Documents/Common_Solutions/src/utility/utility.cc
CMakeFiles/Common_Solutions.dir/src/utility/utility.cc.obj: CMakeFiles/Common_Solutions.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/Fernando/Documents/Common_Solutions/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Common_Solutions.dir/src/utility/utility.cc.obj"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Common_Solutions.dir/src/utility/utility.cc.obj -MF CMakeFiles/Common_Solutions.dir/src/utility/utility.cc.obj.d -o CMakeFiles/Common_Solutions.dir/src/utility/utility.cc.obj -c C:/Users/Fernando/Documents/Common_Solutions/src/utility/utility.cc

CMakeFiles/Common_Solutions.dir/src/utility/utility.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Common_Solutions.dir/src/utility/utility.cc.i"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/Fernando/Documents/Common_Solutions/src/utility/utility.cc > CMakeFiles/Common_Solutions.dir/src/utility/utility.cc.i

CMakeFiles/Common_Solutions.dir/src/utility/utility.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Common_Solutions.dir/src/utility/utility.cc.s"
	C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/Fernando/Documents/Common_Solutions/src/utility/utility.cc -o CMakeFiles/Common_Solutions.dir/src/utility/utility.cc.s

# Object files for target Common_Solutions
Common_Solutions_OBJECTS = \
"CMakeFiles/Common_Solutions.dir/src/main/main.cc.obj" \
"CMakeFiles/Common_Solutions.dir/src/client/client.cc.obj" \
"CMakeFiles/Common_Solutions.dir/src/client_repository/client_repository.cc.obj" \
"CMakeFiles/Common_Solutions.dir/src/supplier/supplier.cc.obj" \
"CMakeFiles/Common_Solutions.dir/src/supplier_repository/supplier_repository.cc.obj" \
"CMakeFiles/Common_Solutions.dir/src/business/business.cc.obj" \
"CMakeFiles/Common_Solutions.dir/src/menu/menu.cc.obj" \
"CMakeFiles/Common_Solutions.dir/src/utility/utility.cc.obj"

# External object files for target Common_Solutions
Common_Solutions_EXTERNAL_OBJECTS =

Common_Solutions.exe: CMakeFiles/Common_Solutions.dir/src/main/main.cc.obj
Common_Solutions.exe: CMakeFiles/Common_Solutions.dir/src/client/client.cc.obj
Common_Solutions.exe: CMakeFiles/Common_Solutions.dir/src/client_repository/client_repository.cc.obj
Common_Solutions.exe: CMakeFiles/Common_Solutions.dir/src/supplier/supplier.cc.obj
Common_Solutions.exe: CMakeFiles/Common_Solutions.dir/src/supplier_repository/supplier_repository.cc.obj
Common_Solutions.exe: CMakeFiles/Common_Solutions.dir/src/business/business.cc.obj
Common_Solutions.exe: CMakeFiles/Common_Solutions.dir/src/menu/menu.cc.obj
Common_Solutions.exe: CMakeFiles/Common_Solutions.dir/src/utility/utility.cc.obj
Common_Solutions.exe: CMakeFiles/Common_Solutions.dir/build.make
Common_Solutions.exe: src/menu/libmenu.dll.a
Common_Solutions.exe: src/utility/libutility.dll.a
Common_Solutions.exe: src/business/libbusiness.dll.a
Common_Solutions.exe: src/client_repository/libclient_repository.dll.a
Common_Solutions.exe: src/client/libclient.dll.a
Common_Solutions.exe: src/supplier_repository/libsupplier_repository.dll.a
Common_Solutions.exe: src/supplier/libsupplier.dll.a
Common_Solutions.exe: CMakeFiles/Common_Solutions.dir/linkLibs.rsp
Common_Solutions.exe: CMakeFiles/Common_Solutions.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:/Users/Fernando/Documents/Common_Solutions/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable Common_Solutions.exe"
	C:/Python310/Lib/site-packages/cmake/data/bin/cmake.exe -E rm -f CMakeFiles/Common_Solutions.dir/objects.a
	C:/msys64/mingw64/bin/ar.exe qc CMakeFiles/Common_Solutions.dir/objects.a @CMakeFiles/Common_Solutions.dir/objects1.rsp
	C:/msys64/mingw64/bin/g++.exe -g -Wl,--whole-archive CMakeFiles/Common_Solutions.dir/objects.a -Wl,--no-whole-archive -o Common_Solutions.exe -Wl,--out-implib,libCommon_Solutions.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/Common_Solutions.dir/linkLibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/Common_Solutions.dir/build: Common_Solutions.exe
.PHONY : CMakeFiles/Common_Solutions.dir/build

CMakeFiles/Common_Solutions.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Common_Solutions.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Common_Solutions.dir/clean

CMakeFiles/Common_Solutions.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" C:/Users/Fernando/Documents/Common_Solutions C:/Users/Fernando/Documents/Common_Solutions C:/Users/Fernando/Documents/Common_Solutions/build C:/Users/Fernando/Documents/Common_Solutions/build C:/Users/Fernando/Documents/Common_Solutions/build/CMakeFiles/Common_Solutions.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Common_Solutions.dir/depend

