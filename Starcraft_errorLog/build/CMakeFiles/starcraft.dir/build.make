# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /snap/cmake/870/bin/cmake

# The command to remove a file.
RM = /snap/cmake/870/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nikolay/Documents/Starcraft

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nikolay/Documents/Starcraft/build

# Include any dependencies generated for this target.
include CMakeFiles/starcraft.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/starcraft.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/starcraft.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/starcraft.dir/flags.make

CMakeFiles/starcraft.dir/src/main.c.o: CMakeFiles/starcraft.dir/flags.make
CMakeFiles/starcraft.dir/src/main.c.o: ../src/main.c
CMakeFiles/starcraft.dir/src/main.c.o: CMakeFiles/starcraft.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nikolay/Documents/Starcraft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/starcraft.dir/src/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/starcraft.dir/src/main.c.o -MF CMakeFiles/starcraft.dir/src/main.c.o.d -o CMakeFiles/starcraft.dir/src/main.c.o -c /home/nikolay/Documents/Starcraft/src/main.c

CMakeFiles/starcraft.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/starcraft.dir/src/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nikolay/Documents/Starcraft/src/main.c > CMakeFiles/starcraft.dir/src/main.c.i

CMakeFiles/starcraft.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/starcraft.dir/src/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nikolay/Documents/Starcraft/src/main.c -o CMakeFiles/starcraft.dir/src/main.c.s

CMakeFiles/starcraft.dir/src/Vector.c.o: CMakeFiles/starcraft.dir/flags.make
CMakeFiles/starcraft.dir/src/Vector.c.o: ../src/Vector.c
CMakeFiles/starcraft.dir/src/Vector.c.o: CMakeFiles/starcraft.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nikolay/Documents/Starcraft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/starcraft.dir/src/Vector.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/starcraft.dir/src/Vector.c.o -MF CMakeFiles/starcraft.dir/src/Vector.c.o.d -o CMakeFiles/starcraft.dir/src/Vector.c.o -c /home/nikolay/Documents/Starcraft/src/Vector.c

CMakeFiles/starcraft.dir/src/Vector.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/starcraft.dir/src/Vector.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nikolay/Documents/Starcraft/src/Vector.c > CMakeFiles/starcraft.dir/src/Vector.c.i

CMakeFiles/starcraft.dir/src/Vector.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/starcraft.dir/src/Vector.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nikolay/Documents/Starcraft/src/Vector.c -o CMakeFiles/starcraft.dir/src/Vector.c.s

CMakeFiles/starcraft.dir/src/BattleField.c.o: CMakeFiles/starcraft.dir/flags.make
CMakeFiles/starcraft.dir/src/BattleField.c.o: ../src/BattleField.c
CMakeFiles/starcraft.dir/src/BattleField.c.o: CMakeFiles/starcraft.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nikolay/Documents/Starcraft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/starcraft.dir/src/BattleField.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/starcraft.dir/src/BattleField.c.o -MF CMakeFiles/starcraft.dir/src/BattleField.c.o.d -o CMakeFiles/starcraft.dir/src/BattleField.c.o -c /home/nikolay/Documents/Starcraft/src/BattleField.c

CMakeFiles/starcraft.dir/src/BattleField.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/starcraft.dir/src/BattleField.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nikolay/Documents/Starcraft/src/BattleField.c > CMakeFiles/starcraft.dir/src/BattleField.c.i

CMakeFiles/starcraft.dir/src/BattleField.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/starcraft.dir/src/BattleField.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nikolay/Documents/Starcraft/src/BattleField.c -o CMakeFiles/starcraft.dir/src/BattleField.c.s

CMakeFiles/starcraft.dir/src/Ships.c.o: CMakeFiles/starcraft.dir/flags.make
CMakeFiles/starcraft.dir/src/Ships.c.o: ../src/Ships.c
CMakeFiles/starcraft.dir/src/Ships.c.o: CMakeFiles/starcraft.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nikolay/Documents/Starcraft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/starcraft.dir/src/Ships.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/starcraft.dir/src/Ships.c.o -MF CMakeFiles/starcraft.dir/src/Ships.c.o.d -o CMakeFiles/starcraft.dir/src/Ships.c.o -c /home/nikolay/Documents/Starcraft/src/Ships.c

CMakeFiles/starcraft.dir/src/Ships.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/starcraft.dir/src/Ships.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nikolay/Documents/Starcraft/src/Ships.c > CMakeFiles/starcraft.dir/src/Ships.c.i

CMakeFiles/starcraft.dir/src/Ships.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/starcraft.dir/src/Ships.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nikolay/Documents/Starcraft/src/Ships.c -o CMakeFiles/starcraft.dir/src/Ships.c.s

CMakeFiles/starcraft.dir/src/statusLog.c.o: CMakeFiles/starcraft.dir/flags.make
CMakeFiles/starcraft.dir/src/statusLog.c.o: ../src/statusLog.c
CMakeFiles/starcraft.dir/src/statusLog.c.o: CMakeFiles/starcraft.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nikolay/Documents/Starcraft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/starcraft.dir/src/statusLog.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/starcraft.dir/src/statusLog.c.o -MF CMakeFiles/starcraft.dir/src/statusLog.c.o.d -o CMakeFiles/starcraft.dir/src/statusLog.c.o -c /home/nikolay/Documents/Starcraft/src/statusLog.c

CMakeFiles/starcraft.dir/src/statusLog.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/starcraft.dir/src/statusLog.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nikolay/Documents/Starcraft/src/statusLog.c > CMakeFiles/starcraft.dir/src/statusLog.c.i

CMakeFiles/starcraft.dir/src/statusLog.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/starcraft.dir/src/statusLog.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nikolay/Documents/Starcraft/src/statusLog.c -o CMakeFiles/starcraft.dir/src/statusLog.c.s

# Object files for target starcraft
starcraft_OBJECTS = \
"CMakeFiles/starcraft.dir/src/main.c.o" \
"CMakeFiles/starcraft.dir/src/Vector.c.o" \
"CMakeFiles/starcraft.dir/src/BattleField.c.o" \
"CMakeFiles/starcraft.dir/src/Ships.c.o" \
"CMakeFiles/starcraft.dir/src/statusLog.c.o"

# External object files for target starcraft
starcraft_EXTERNAL_OBJECTS =

starcraft: CMakeFiles/starcraft.dir/src/main.c.o
starcraft: CMakeFiles/starcraft.dir/src/Vector.c.o
starcraft: CMakeFiles/starcraft.dir/src/BattleField.c.o
starcraft: CMakeFiles/starcraft.dir/src/Ships.c.o
starcraft: CMakeFiles/starcraft.dir/src/statusLog.c.o
starcraft: CMakeFiles/starcraft.dir/build.make
starcraft: CMakeFiles/starcraft.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nikolay/Documents/Starcraft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable starcraft"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/starcraft.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/starcraft.dir/build: starcraft
.PHONY : CMakeFiles/starcraft.dir/build

CMakeFiles/starcraft.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/starcraft.dir/cmake_clean.cmake
.PHONY : CMakeFiles/starcraft.dir/clean

CMakeFiles/starcraft.dir/depend:
	cd /home/nikolay/Documents/Starcraft/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nikolay/Documents/Starcraft /home/nikolay/Documents/Starcraft /home/nikolay/Documents/Starcraft/build /home/nikolay/Documents/Starcraft/build /home/nikolay/Documents/Starcraft/build/CMakeFiles/starcraft.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/starcraft.dir/depend

