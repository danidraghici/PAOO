# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/daniela/PAOO_LAB/PAOO/hw1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/daniela/PAOO_LAB/PAOO/hw1/build

# Include any dependencies generated for this target.
include src/CMakeFiles/MyExecutable.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/MyExecutable.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/MyExecutable.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/MyExecutable.dir/flags.make

src/CMakeFiles/MyExecutable.dir/main.cpp.o: src/CMakeFiles/MyExecutable.dir/flags.make
src/CMakeFiles/MyExecutable.dir/main.cpp.o: ../src/main.cpp
src/CMakeFiles/MyExecutable.dir/main.cpp.o: src/CMakeFiles/MyExecutable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/daniela/PAOO_LAB/PAOO/hw1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/MyExecutable.dir/main.cpp.o"
	cd /home/daniela/PAOO_LAB/PAOO/hw1/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/MyExecutable.dir/main.cpp.o -MF CMakeFiles/MyExecutable.dir/main.cpp.o.d -o CMakeFiles/MyExecutable.dir/main.cpp.o -c /home/daniela/PAOO_LAB/PAOO/hw1/src/main.cpp

src/CMakeFiles/MyExecutable.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyExecutable.dir/main.cpp.i"
	cd /home/daniela/PAOO_LAB/PAOO/hw1/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/daniela/PAOO_LAB/PAOO/hw1/src/main.cpp > CMakeFiles/MyExecutable.dir/main.cpp.i

src/CMakeFiles/MyExecutable.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyExecutable.dir/main.cpp.s"
	cd /home/daniela/PAOO_LAB/PAOO/hw1/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/daniela/PAOO_LAB/PAOO/hw1/src/main.cpp -o CMakeFiles/MyExecutable.dir/main.cpp.s

# Object files for target MyExecutable
MyExecutable_OBJECTS = \
"CMakeFiles/MyExecutable.dir/main.cpp.o"

# External object files for target MyExecutable
MyExecutable_EXTERNAL_OBJECTS =

MyExecutable: src/CMakeFiles/MyExecutable.dir/main.cpp.o
MyExecutable: src/CMakeFiles/MyExecutable.dir/build.make
MyExecutable: src/Masina/libMasinaLibrary.a
MyExecutable: src/Vehicul/libVehiculLibrary.a
MyExecutable: src/CMakeFiles/MyExecutable.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/daniela/PAOO_LAB/PAOO/hw1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../MyExecutable"
	cd /home/daniela/PAOO_LAB/PAOO/hw1/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyExecutable.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/MyExecutable.dir/build: MyExecutable
.PHONY : src/CMakeFiles/MyExecutable.dir/build

src/CMakeFiles/MyExecutable.dir/clean:
	cd /home/daniela/PAOO_LAB/PAOO/hw1/build/src && $(CMAKE_COMMAND) -P CMakeFiles/MyExecutable.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/MyExecutable.dir/clean

src/CMakeFiles/MyExecutable.dir/depend:
	cd /home/daniela/PAOO_LAB/PAOO/hw1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/daniela/PAOO_LAB/PAOO/hw1 /home/daniela/PAOO_LAB/PAOO/hw1/src /home/daniela/PAOO_LAB/PAOO/hw1/build /home/daniela/PAOO_LAB/PAOO/hw1/build/src /home/daniela/PAOO_LAB/PAOO/hw1/build/src/CMakeFiles/MyExecutable.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/MyExecutable.dir/depend

