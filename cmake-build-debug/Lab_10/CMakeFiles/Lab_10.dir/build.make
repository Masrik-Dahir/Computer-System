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
CMAKE_COMMAND = "/Users/masrikdahir/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/212.5080.54/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/masrikdahir/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/212.5080.54/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/masrikdahir/CLionProjects/Computer-System

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug

# Include any dependencies generated for this target.
include Lab_10/CMakeFiles/Lab_10.dir/depend.make
# Include the progress variables for this target.
include Lab_10/CMakeFiles/Lab_10.dir/progress.make

# Include the compile flags for this target's objects.
include Lab_10/CMakeFiles/Lab_10.dir/flags.make

Lab_10/CMakeFiles/Lab_10.dir/csapp.c.o: Lab_10/CMakeFiles/Lab_10.dir/flags.make
Lab_10/CMakeFiles/Lab_10.dir/csapp.c.o: ../Lab_10/csapp.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object Lab_10/CMakeFiles/Lab_10.dir/csapp.c.o"
	cd /Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug/Lab_10 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab_10.dir/csapp.c.o -c /Users/masrikdahir/CLionProjects/Computer-System/Lab_10/csapp.c

Lab_10/CMakeFiles/Lab_10.dir/csapp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab_10.dir/csapp.c.i"
	cd /Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug/Lab_10 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/masrikdahir/CLionProjects/Computer-System/Lab_10/csapp.c > CMakeFiles/Lab_10.dir/csapp.c.i

Lab_10/CMakeFiles/Lab_10.dir/csapp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab_10.dir/csapp.c.s"
	cd /Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug/Lab_10 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/masrikdahir/CLionProjects/Computer-System/Lab_10/csapp.c -o CMakeFiles/Lab_10.dir/csapp.c.s

Lab_10/CMakeFiles/Lab_10.dir/hellobug.c.o: Lab_10/CMakeFiles/Lab_10.dir/flags.make
Lab_10/CMakeFiles/Lab_10.dir/hellobug.c.o: ../Lab_10/hellobug.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object Lab_10/CMakeFiles/Lab_10.dir/hellobug.c.o"
	cd /Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug/Lab_10 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab_10.dir/hellobug.c.o -c /Users/masrikdahir/CLionProjects/Computer-System/Lab_10/hellobug.c

Lab_10/CMakeFiles/Lab_10.dir/hellobug.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab_10.dir/hellobug.c.i"
	cd /Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug/Lab_10 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/masrikdahir/CLionProjects/Computer-System/Lab_10/hellobug.c > CMakeFiles/Lab_10.dir/hellobug.c.i

Lab_10/CMakeFiles/Lab_10.dir/hellobug.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab_10.dir/hellobug.c.s"
	cd /Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug/Lab_10 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/masrikdahir/CLionProjects/Computer-System/Lab_10/hellobug.c -o CMakeFiles/Lab_10.dir/hellobug.c.s

Lab_10/CMakeFiles/Lab_10.dir/race.c.o: Lab_10/CMakeFiles/Lab_10.dir/flags.make
Lab_10/CMakeFiles/Lab_10.dir/race.c.o: ../Lab_10/race.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object Lab_10/CMakeFiles/Lab_10.dir/race.c.o"
	cd /Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug/Lab_10 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab_10.dir/race.c.o -c /Users/masrikdahir/CLionProjects/Computer-System/Lab_10/race.c

Lab_10/CMakeFiles/Lab_10.dir/race.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab_10.dir/race.c.i"
	cd /Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug/Lab_10 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/masrikdahir/CLionProjects/Computer-System/Lab_10/race.c > CMakeFiles/Lab_10.dir/race.c.i

Lab_10/CMakeFiles/Lab_10.dir/race.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab_10.dir/race.c.s"
	cd /Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug/Lab_10 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/masrikdahir/CLionProjects/Computer-System/Lab_10/race.c -o CMakeFiles/Lab_10.dir/race.c.s

Lab_10/CMakeFiles/Lab_10.dir/semaphore.c.o: Lab_10/CMakeFiles/Lab_10.dir/flags.make
Lab_10/CMakeFiles/Lab_10.dir/semaphore.c.o: ../Lab_10/semaphore.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object Lab_10/CMakeFiles/Lab_10.dir/semaphore.c.o"
	cd /Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug/Lab_10 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab_10.dir/semaphore.c.o -c /Users/masrikdahir/CLionProjects/Computer-System/Lab_10/semaphore.c

Lab_10/CMakeFiles/Lab_10.dir/semaphore.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab_10.dir/semaphore.c.i"
	cd /Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug/Lab_10 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/masrikdahir/CLionProjects/Computer-System/Lab_10/semaphore.c > CMakeFiles/Lab_10.dir/semaphore.c.i

Lab_10/CMakeFiles/Lab_10.dir/semaphore.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab_10.dir/semaphore.c.s"
	cd /Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug/Lab_10 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/masrikdahir/CLionProjects/Computer-System/Lab_10/semaphore.c -o CMakeFiles/Lab_10.dir/semaphore.c.s

# Object files for target Lab_10
Lab_10_OBJECTS = \
"CMakeFiles/Lab_10.dir/csapp.c.o" \
"CMakeFiles/Lab_10.dir/hellobug.c.o" \
"CMakeFiles/Lab_10.dir/race.c.o" \
"CMakeFiles/Lab_10.dir/semaphore.c.o"

# External object files for target Lab_10
Lab_10_EXTERNAL_OBJECTS =

Lab_10/Lab_10: Lab_10/CMakeFiles/Lab_10.dir/csapp.c.o
Lab_10/Lab_10: Lab_10/CMakeFiles/Lab_10.dir/hellobug.c.o
Lab_10/Lab_10: Lab_10/CMakeFiles/Lab_10.dir/race.c.o
Lab_10/Lab_10: Lab_10/CMakeFiles/Lab_10.dir/semaphore.c.o
Lab_10/Lab_10: Lab_10/CMakeFiles/Lab_10.dir/build.make
Lab_10/Lab_10: Lab_10/CMakeFiles/Lab_10.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable Lab_10"
	cd /Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug/Lab_10 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab_10.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Lab_10/CMakeFiles/Lab_10.dir/build: Lab_10/Lab_10
.PHONY : Lab_10/CMakeFiles/Lab_10.dir/build

Lab_10/CMakeFiles/Lab_10.dir/clean:
	cd /Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug/Lab_10 && $(CMAKE_COMMAND) -P CMakeFiles/Lab_10.dir/cmake_clean.cmake
.PHONY : Lab_10/CMakeFiles/Lab_10.dir/clean

Lab_10/CMakeFiles/Lab_10.dir/depend:
	cd /Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/masrikdahir/CLionProjects/Computer-System /Users/masrikdahir/CLionProjects/Computer-System/Lab_10 /Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug /Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug/Lab_10 /Users/masrikdahir/CLionProjects/Computer-System/cmake-build-debug/Lab_10/CMakeFiles/Lab_10.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Lab_10/CMakeFiles/Lab_10.dir/depend

