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
CMAKE_SOURCE_DIR = /Users/jackson/CLionProjects/examReview4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jackson/CLionProjects/examReview4/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/examReview4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/examReview4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/examReview4.dir/flags.make

CMakeFiles/examReview4.dir/main.cpp.o: CMakeFiles/examReview4.dir/flags.make
CMakeFiles/examReview4.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jackson/CLionProjects/examReview4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/examReview4.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/examReview4.dir/main.cpp.o -c /Users/jackson/CLionProjects/examReview4/main.cpp

CMakeFiles/examReview4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/examReview4.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jackson/CLionProjects/examReview4/main.cpp > CMakeFiles/examReview4.dir/main.cpp.i

CMakeFiles/examReview4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/examReview4.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jackson/CLionProjects/examReview4/main.cpp -o CMakeFiles/examReview4.dir/main.cpp.s

CMakeFiles/examReview4.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/examReview4.dir/main.cpp.o.requires

CMakeFiles/examReview4.dir/main.cpp.o.provides: CMakeFiles/examReview4.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/examReview4.dir/build.make CMakeFiles/examReview4.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/examReview4.dir/main.cpp.o.provides

CMakeFiles/examReview4.dir/main.cpp.o.provides.build: CMakeFiles/examReview4.dir/main.cpp.o


# Object files for target examReview4
examReview4_OBJECTS = \
"CMakeFiles/examReview4.dir/main.cpp.o"

# External object files for target examReview4
examReview4_EXTERNAL_OBJECTS =

examReview4: CMakeFiles/examReview4.dir/main.cpp.o
examReview4: CMakeFiles/examReview4.dir/build.make
examReview4: CMakeFiles/examReview4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jackson/CLionProjects/examReview4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable examReview4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/examReview4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/examReview4.dir/build: examReview4

.PHONY : CMakeFiles/examReview4.dir/build

CMakeFiles/examReview4.dir/requires: CMakeFiles/examReview4.dir/main.cpp.o.requires

.PHONY : CMakeFiles/examReview4.dir/requires

CMakeFiles/examReview4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/examReview4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/examReview4.dir/clean

CMakeFiles/examReview4.dir/depend:
	cd /Users/jackson/CLionProjects/examReview4/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jackson/CLionProjects/examReview4 /Users/jackson/CLionProjects/examReview4 /Users/jackson/CLionProjects/examReview4/cmake-build-debug /Users/jackson/CLionProjects/examReview4/cmake-build-debug /Users/jackson/CLionProjects/examReview4/cmake-build-debug/CMakeFiles/examReview4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/examReview4.dir/depend

