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
CMAKE_SOURCE_DIR = /Users/houqinghua/Desktop/ILO/CLionProjects/ZigZag

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/houqinghua/Desktop/ILO/CLionProjects/ZigZag/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ZigZag.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ZigZag.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ZigZag.dir/flags.make

CMakeFiles/ZigZag.dir/main.cpp.o: CMakeFiles/ZigZag.dir/flags.make
CMakeFiles/ZigZag.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/houqinghua/Desktop/ILO/CLionProjects/ZigZag/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ZigZag.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ZigZag.dir/main.cpp.o -c /Users/houqinghua/Desktop/ILO/CLionProjects/ZigZag/main.cpp

CMakeFiles/ZigZag.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ZigZag.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/houqinghua/Desktop/ILO/CLionProjects/ZigZag/main.cpp > CMakeFiles/ZigZag.dir/main.cpp.i

CMakeFiles/ZigZag.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ZigZag.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/houqinghua/Desktop/ILO/CLionProjects/ZigZag/main.cpp -o CMakeFiles/ZigZag.dir/main.cpp.s

CMakeFiles/ZigZag.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/ZigZag.dir/main.cpp.o.requires

CMakeFiles/ZigZag.dir/main.cpp.o.provides: CMakeFiles/ZigZag.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ZigZag.dir/build.make CMakeFiles/ZigZag.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/ZigZag.dir/main.cpp.o.provides

CMakeFiles/ZigZag.dir/main.cpp.o.provides.build: CMakeFiles/ZigZag.dir/main.cpp.o


# Object files for target ZigZag
ZigZag_OBJECTS = \
"CMakeFiles/ZigZag.dir/main.cpp.o"

# External object files for target ZigZag
ZigZag_EXTERNAL_OBJECTS =

ZigZag: CMakeFiles/ZigZag.dir/main.cpp.o
ZigZag: CMakeFiles/ZigZag.dir/build.make
ZigZag: CMakeFiles/ZigZag.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/houqinghua/Desktop/ILO/CLionProjects/ZigZag/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ZigZag"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ZigZag.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ZigZag.dir/build: ZigZag

.PHONY : CMakeFiles/ZigZag.dir/build

CMakeFiles/ZigZag.dir/requires: CMakeFiles/ZigZag.dir/main.cpp.o.requires

.PHONY : CMakeFiles/ZigZag.dir/requires

CMakeFiles/ZigZag.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ZigZag.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ZigZag.dir/clean

CMakeFiles/ZigZag.dir/depend:
	cd /Users/houqinghua/Desktop/ILO/CLionProjects/ZigZag/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/houqinghua/Desktop/ILO/CLionProjects/ZigZag /Users/houqinghua/Desktop/ILO/CLionProjects/ZigZag /Users/houqinghua/Desktop/ILO/CLionProjects/ZigZag/cmake-build-debug /Users/houqinghua/Desktop/ILO/CLionProjects/ZigZag/cmake-build-debug /Users/houqinghua/Desktop/ILO/CLionProjects/ZigZag/cmake-build-debug/CMakeFiles/ZigZag.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ZigZag.dir/depend

