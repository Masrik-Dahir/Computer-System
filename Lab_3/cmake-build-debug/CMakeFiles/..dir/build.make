# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = C:\Users\masri\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5080.54\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\masri\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5080.54\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\masri\CLionProjects\Lab3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\masri\CLionProjects\Lab3\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/..dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/..dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/..dir/flags.make

CMakeFiles/..dir/lab3main.c.obj: CMakeFiles/..dir/flags.make
CMakeFiles/..dir/lab3main.c.obj: CMakeFiles/..dir/includes_C.rsp
CMakeFiles/..dir/lab3main.c.obj: ../lab3main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\masri\CLionProjects\Lab3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/..dir/lab3main.c.obj"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\..dir\lab3main.c.obj -c C:\Users\masri\CLionProjects\Lab3\lab3main.c

CMakeFiles/..dir/lab3main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/..dir/lab3main.c.i"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\masri\CLionProjects\Lab3\lab3main.c > CMakeFiles\..dir\lab3main.c.i

CMakeFiles/..dir/lab3main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/..dir/lab3main.c.s"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\masri\CLionProjects\Lab3\lab3main.c -o CMakeFiles\..dir\lab3main.c.s

CMakeFiles/..dir/lab3support.c.obj: CMakeFiles/..dir/flags.make
CMakeFiles/..dir/lab3support.c.obj: CMakeFiles/..dir/includes_C.rsp
CMakeFiles/..dir/lab3support.c.obj: ../lab3support.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\masri\CLionProjects\Lab3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/..dir/lab3support.c.obj"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\..dir\lab3support.c.obj -c C:\Users\masri\CLionProjects\Lab3\lab3support.c

CMakeFiles/..dir/lab3support.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/..dir/lab3support.c.i"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\masri\CLionProjects\Lab3\lab3support.c > CMakeFiles\..dir\lab3support.c.i

CMakeFiles/..dir/lab3support.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/..dir/lab3support.c.s"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\masri\CLionProjects\Lab3\lab3support.c -o CMakeFiles\..dir\lab3support.c.s

# Object files for target .
__OBJECTS = \
"CMakeFiles/..dir/lab3main.c.obj" \
"CMakeFiles/..dir/lab3support.c.obj"

# External object files for target .
__EXTERNAL_OBJECTS =

..exe: CMakeFiles/..dir/lab3main.c.obj
..exe: CMakeFiles/..dir/lab3support.c.obj
..exe: CMakeFiles/..dir/build.make
..exe: CMakeFiles/..dir/linklibs.rsp
..exe: CMakeFiles/..dir/objects1.rsp
..exe: CMakeFiles/..dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\masri\CLionProjects\Lab3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable ..exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\..dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/..dir/build: ..exe
.PHONY : CMakeFiles/..dir/build

CMakeFiles/..dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\..dir\cmake_clean.cmake
.PHONY : CMakeFiles/..dir/clean

CMakeFiles/..dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\masri\CLionProjects\Lab3 C:\Users\masri\CLionProjects\Lab3 C:\Users\masri\CLionProjects\Lab3\cmake-build-debug C:\Users\masri\CLionProjects\Lab3\cmake-build-debug C:\Users\masri\CLionProjects\Lab3\cmake-build-debug\CMakeFiles\..dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/..dir/depend

