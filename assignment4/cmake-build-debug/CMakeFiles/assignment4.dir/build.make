# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jackson/CLionProjects/assignment4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jackson/CLionProjects/assignment4/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/assignment4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/assignment4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/assignment4.dir/flags.make

CMakeFiles/assignment4.dir/main.cpp.o: CMakeFiles/assignment4.dir/flags.make
CMakeFiles/assignment4.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jackson/CLionProjects/assignment4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/assignment4.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/assignment4.dir/main.cpp.o -c /Users/jackson/CLionProjects/assignment4/main.cpp

CMakeFiles/assignment4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/assignment4.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jackson/CLionProjects/assignment4/main.cpp > CMakeFiles/assignment4.dir/main.cpp.i

CMakeFiles/assignment4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/assignment4.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jackson/CLionProjects/assignment4/main.cpp -o CMakeFiles/assignment4.dir/main.cpp.s

CMakeFiles/assignment4.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/assignment4.dir/main.cpp.o.requires

CMakeFiles/assignment4.dir/main.cpp.o.provides: CMakeFiles/assignment4.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/assignment4.dir/build.make CMakeFiles/assignment4.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/assignment4.dir/main.cpp.o.provides

CMakeFiles/assignment4.dir/main.cpp.o.provides.build: CMakeFiles/assignment4.dir/main.cpp.o


# Object files for target assignment4
assignment4_OBJECTS = \
"CMakeFiles/assignment4.dir/main.cpp.o"

# External object files for target assignment4
assignment4_EXTERNAL_OBJECTS =

assignment4: CMakeFiles/assignment4.dir/main.cpp.o
assignment4: CMakeFiles/assignment4.dir/build.make
assignment4: CMakeFiles/assignment4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jackson/CLionProjects/assignment4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable assignment4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/assignment4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/assignment4.dir/build: assignment4

.PHONY : CMakeFiles/assignment4.dir/build

CMakeFiles/assignment4.dir/requires: CMakeFiles/assignment4.dir/main.cpp.o.requires

.PHONY : CMakeFiles/assignment4.dir/requires

CMakeFiles/assignment4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/assignment4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/assignment4.dir/clean

CMakeFiles/assignment4.dir/depend:
	cd /Users/jackson/CLionProjects/assignment4/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jackson/CLionProjects/assignment4 /Users/jackson/CLionProjects/assignment4 /Users/jackson/CLionProjects/assignment4/cmake-build-debug /Users/jackson/CLionProjects/assignment4/cmake-build-debug /Users/jackson/CLionProjects/assignment4/cmake-build-debug/CMakeFiles/assignment4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/assignment4.dir/depend

