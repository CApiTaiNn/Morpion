# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\msys64\mingw64\bin\cmake.exe

# The command to remove a file.
RM = C:\msys64\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Entrainement_Web\c++\morpion

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Entrainement_Web\c++\morpion\build

# Include any dependencies generated for this target.
include CMakeFiles/morpion.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/morpion.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/morpion.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/morpion.dir/flags.make

CMakeFiles/morpion.dir/main.cpp.obj: CMakeFiles/morpion.dir/flags.make
CMakeFiles/morpion.dir/main.cpp.obj: CMakeFiles/morpion.dir/includes_CXX.rsp
CMakeFiles/morpion.dir/main.cpp.obj: C:/Entrainement_Web/c++/morpion/main.cpp
CMakeFiles/morpion.dir/main.cpp.obj: CMakeFiles/morpion.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Entrainement_Web\c++\morpion\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/morpion.dir/main.cpp.obj"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/morpion.dir/main.cpp.obj -MF CMakeFiles\morpion.dir\main.cpp.obj.d -o CMakeFiles\morpion.dir\main.cpp.obj -c C:\Entrainement_Web\c++\morpion\main.cpp

CMakeFiles/morpion.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/morpion.dir/main.cpp.i"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Entrainement_Web\c++\morpion\main.cpp > CMakeFiles\morpion.dir\main.cpp.i

CMakeFiles/morpion.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/morpion.dir/main.cpp.s"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Entrainement_Web\c++\morpion\main.cpp -o CMakeFiles\morpion.dir\main.cpp.s

CMakeFiles/morpion.dir/src/Game.cpp.obj: CMakeFiles/morpion.dir/flags.make
CMakeFiles/morpion.dir/src/Game.cpp.obj: CMakeFiles/morpion.dir/includes_CXX.rsp
CMakeFiles/morpion.dir/src/Game.cpp.obj: C:/Entrainement_Web/c++/morpion/src/Game.cpp
CMakeFiles/morpion.dir/src/Game.cpp.obj: CMakeFiles/morpion.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Entrainement_Web\c++\morpion\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/morpion.dir/src/Game.cpp.obj"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/morpion.dir/src/Game.cpp.obj -MF CMakeFiles\morpion.dir\src\Game.cpp.obj.d -o CMakeFiles\morpion.dir\src\Game.cpp.obj -c C:\Entrainement_Web\c++\morpion\src\Game.cpp

CMakeFiles/morpion.dir/src/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/morpion.dir/src/Game.cpp.i"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Entrainement_Web\c++\morpion\src\Game.cpp > CMakeFiles\morpion.dir\src\Game.cpp.i

CMakeFiles/morpion.dir/src/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/morpion.dir/src/Game.cpp.s"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Entrainement_Web\c++\morpion\src\Game.cpp -o CMakeFiles\morpion.dir\src\Game.cpp.s

CMakeFiles/morpion.dir/src/Human.cpp.obj: CMakeFiles/morpion.dir/flags.make
CMakeFiles/morpion.dir/src/Human.cpp.obj: CMakeFiles/morpion.dir/includes_CXX.rsp
CMakeFiles/morpion.dir/src/Human.cpp.obj: C:/Entrainement_Web/c++/morpion/src/Human.cpp
CMakeFiles/morpion.dir/src/Human.cpp.obj: CMakeFiles/morpion.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Entrainement_Web\c++\morpion\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/morpion.dir/src/Human.cpp.obj"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/morpion.dir/src/Human.cpp.obj -MF CMakeFiles\morpion.dir\src\Human.cpp.obj.d -o CMakeFiles\morpion.dir\src\Human.cpp.obj -c C:\Entrainement_Web\c++\morpion\src\Human.cpp

CMakeFiles/morpion.dir/src/Human.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/morpion.dir/src/Human.cpp.i"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Entrainement_Web\c++\morpion\src\Human.cpp > CMakeFiles\morpion.dir\src\Human.cpp.i

CMakeFiles/morpion.dir/src/Human.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/morpion.dir/src/Human.cpp.s"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Entrainement_Web\c++\morpion\src\Human.cpp -o CMakeFiles\morpion.dir\src\Human.cpp.s

CMakeFiles/morpion.dir/src/IA.cpp.obj: CMakeFiles/morpion.dir/flags.make
CMakeFiles/morpion.dir/src/IA.cpp.obj: CMakeFiles/morpion.dir/includes_CXX.rsp
CMakeFiles/morpion.dir/src/IA.cpp.obj: C:/Entrainement_Web/c++/morpion/src/IA.cpp
CMakeFiles/morpion.dir/src/IA.cpp.obj: CMakeFiles/morpion.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Entrainement_Web\c++\morpion\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/morpion.dir/src/IA.cpp.obj"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/morpion.dir/src/IA.cpp.obj -MF CMakeFiles\morpion.dir\src\IA.cpp.obj.d -o CMakeFiles\morpion.dir\src\IA.cpp.obj -c C:\Entrainement_Web\c++\morpion\src\IA.cpp

CMakeFiles/morpion.dir/src/IA.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/morpion.dir/src/IA.cpp.i"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Entrainement_Web\c++\morpion\src\IA.cpp > CMakeFiles\morpion.dir\src\IA.cpp.i

CMakeFiles/morpion.dir/src/IA.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/morpion.dir/src/IA.cpp.s"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Entrainement_Web\c++\morpion\src\IA.cpp -o CMakeFiles\morpion.dir\src\IA.cpp.s

CMakeFiles/morpion.dir/src/Plate.cpp.obj: CMakeFiles/morpion.dir/flags.make
CMakeFiles/morpion.dir/src/Plate.cpp.obj: CMakeFiles/morpion.dir/includes_CXX.rsp
CMakeFiles/morpion.dir/src/Plate.cpp.obj: C:/Entrainement_Web/c++/morpion/src/Plate.cpp
CMakeFiles/morpion.dir/src/Plate.cpp.obj: CMakeFiles/morpion.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Entrainement_Web\c++\morpion\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/morpion.dir/src/Plate.cpp.obj"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/morpion.dir/src/Plate.cpp.obj -MF CMakeFiles\morpion.dir\src\Plate.cpp.obj.d -o CMakeFiles\morpion.dir\src\Plate.cpp.obj -c C:\Entrainement_Web\c++\morpion\src\Plate.cpp

CMakeFiles/morpion.dir/src/Plate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/morpion.dir/src/Plate.cpp.i"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Entrainement_Web\c++\morpion\src\Plate.cpp > CMakeFiles\morpion.dir\src\Plate.cpp.i

CMakeFiles/morpion.dir/src/Plate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/morpion.dir/src/Plate.cpp.s"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Entrainement_Web\c++\morpion\src\Plate.cpp -o CMakeFiles\morpion.dir\src\Plate.cpp.s

CMakeFiles/morpion.dir/src/Player.cpp.obj: CMakeFiles/morpion.dir/flags.make
CMakeFiles/morpion.dir/src/Player.cpp.obj: CMakeFiles/morpion.dir/includes_CXX.rsp
CMakeFiles/morpion.dir/src/Player.cpp.obj: C:/Entrainement_Web/c++/morpion/src/Player.cpp
CMakeFiles/morpion.dir/src/Player.cpp.obj: CMakeFiles/morpion.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Entrainement_Web\c++\morpion\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/morpion.dir/src/Player.cpp.obj"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/morpion.dir/src/Player.cpp.obj -MF CMakeFiles\morpion.dir\src\Player.cpp.obj.d -o CMakeFiles\morpion.dir\src\Player.cpp.obj -c C:\Entrainement_Web\c++\morpion\src\Player.cpp

CMakeFiles/morpion.dir/src/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/morpion.dir/src/Player.cpp.i"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Entrainement_Web\c++\morpion\src\Player.cpp > CMakeFiles\morpion.dir\src\Player.cpp.i

CMakeFiles/morpion.dir/src/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/morpion.dir/src/Player.cpp.s"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Entrainement_Web\c++\morpion\src\Player.cpp -o CMakeFiles\morpion.dir\src\Player.cpp.s

# Object files for target morpion
morpion_OBJECTS = \
"CMakeFiles/morpion.dir/main.cpp.obj" \
"CMakeFiles/morpion.dir/src/Game.cpp.obj" \
"CMakeFiles/morpion.dir/src/Human.cpp.obj" \
"CMakeFiles/morpion.dir/src/IA.cpp.obj" \
"CMakeFiles/morpion.dir/src/Plate.cpp.obj" \
"CMakeFiles/morpion.dir/src/Player.cpp.obj"

# External object files for target morpion
morpion_EXTERNAL_OBJECTS =

morpion.exe: CMakeFiles/morpion.dir/main.cpp.obj
morpion.exe: CMakeFiles/morpion.dir/src/Game.cpp.obj
morpion.exe: CMakeFiles/morpion.dir/src/Human.cpp.obj
morpion.exe: CMakeFiles/morpion.dir/src/IA.cpp.obj
morpion.exe: CMakeFiles/morpion.dir/src/Plate.cpp.obj
morpion.exe: CMakeFiles/morpion.dir/src/Player.cpp.obj
morpion.exe: CMakeFiles/morpion.dir/build.make
morpion.exe: C:/msys64/mingw64/lib/libsfml-graphics.dll.a
morpion.exe: C:/msys64/mingw64/lib/libsfml-audio.dll.a
morpion.exe: C:/msys64/mingw64/lib/libsfml-window.dll.a
morpion.exe: C:/msys64/mingw64/lib/libsfml-system.dll.a
morpion.exe: CMakeFiles/morpion.dir/linkLibs.rsp
morpion.exe: CMakeFiles/morpion.dir/objects1.rsp
morpion.exe: CMakeFiles/morpion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Entrainement_Web\c++\morpion\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable morpion.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\morpion.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/morpion.dir/build: morpion.exe
.PHONY : CMakeFiles/morpion.dir/build

CMakeFiles/morpion.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\morpion.dir\cmake_clean.cmake
.PHONY : CMakeFiles/morpion.dir/clean

CMakeFiles/morpion.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Entrainement_Web\c++\morpion C:\Entrainement_Web\c++\morpion C:\Entrainement_Web\c++\morpion\build C:\Entrainement_Web\c++\morpion\build C:\Entrainement_Web\c++\morpion\build\CMakeFiles\morpion.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/morpion.dir/depend

