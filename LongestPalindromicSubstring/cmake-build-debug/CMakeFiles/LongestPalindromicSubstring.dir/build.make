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
CMAKE_SOURCE_DIR = /Users/houqinghua/Desktop/ILO/CLionProjects/LongestPalindromicSubstring

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/houqinghua/Desktop/ILO/CLionProjects/LongestPalindromicSubstring/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LongestPalindromicSubstring.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LongestPalindromicSubstring.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LongestPalindromicSubstring.dir/flags.make

CMakeFiles/LongestPalindromicSubstring.dir/main.cpp.o: CMakeFiles/LongestPalindromicSubstring.dir/flags.make
CMakeFiles/LongestPalindromicSubstring.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/houqinghua/Desktop/ILO/CLionProjects/LongestPalindromicSubstring/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LongestPalindromicSubstring.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LongestPalindromicSubstring.dir/main.cpp.o -c /Users/houqinghua/Desktop/ILO/CLionProjects/LongestPalindromicSubstring/main.cpp

CMakeFiles/LongestPalindromicSubstring.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LongestPalindromicSubstring.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/houqinghua/Desktop/ILO/CLionProjects/LongestPalindromicSubstring/main.cpp > CMakeFiles/LongestPalindromicSubstring.dir/main.cpp.i

CMakeFiles/LongestPalindromicSubstring.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LongestPalindromicSubstring.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/houqinghua/Desktop/ILO/CLionProjects/LongestPalindromicSubstring/main.cpp -o CMakeFiles/LongestPalindromicSubstring.dir/main.cpp.s

CMakeFiles/LongestPalindromicSubstring.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/LongestPalindromicSubstring.dir/main.cpp.o.requires

CMakeFiles/LongestPalindromicSubstring.dir/main.cpp.o.provides: CMakeFiles/LongestPalindromicSubstring.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/LongestPalindromicSubstring.dir/build.make CMakeFiles/LongestPalindromicSubstring.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/LongestPalindromicSubstring.dir/main.cpp.o.provides

CMakeFiles/LongestPalindromicSubstring.dir/main.cpp.o.provides.build: CMakeFiles/LongestPalindromicSubstring.dir/main.cpp.o


# Object files for target LongestPalindromicSubstring
LongestPalindromicSubstring_OBJECTS = \
"CMakeFiles/LongestPalindromicSubstring.dir/main.cpp.o"

# External object files for target LongestPalindromicSubstring
LongestPalindromicSubstring_EXTERNAL_OBJECTS =

LongestPalindromicSubstring: CMakeFiles/LongestPalindromicSubstring.dir/main.cpp.o
LongestPalindromicSubstring: CMakeFiles/LongestPalindromicSubstring.dir/build.make
LongestPalindromicSubstring: CMakeFiles/LongestPalindromicSubstring.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/houqinghua/Desktop/ILO/CLionProjects/LongestPalindromicSubstring/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LongestPalindromicSubstring"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LongestPalindromicSubstring.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LongestPalindromicSubstring.dir/build: LongestPalindromicSubstring

.PHONY : CMakeFiles/LongestPalindromicSubstring.dir/build

CMakeFiles/LongestPalindromicSubstring.dir/requires: CMakeFiles/LongestPalindromicSubstring.dir/main.cpp.o.requires

.PHONY : CMakeFiles/LongestPalindromicSubstring.dir/requires

CMakeFiles/LongestPalindromicSubstring.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LongestPalindromicSubstring.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LongestPalindromicSubstring.dir/clean

CMakeFiles/LongestPalindromicSubstring.dir/depend:
	cd /Users/houqinghua/Desktop/ILO/CLionProjects/LongestPalindromicSubstring/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/houqinghua/Desktop/ILO/CLionProjects/LongestPalindromicSubstring /Users/houqinghua/Desktop/ILO/CLionProjects/LongestPalindromicSubstring /Users/houqinghua/Desktop/ILO/CLionProjects/LongestPalindromicSubstring/cmake-build-debug /Users/houqinghua/Desktop/ILO/CLionProjects/LongestPalindromicSubstring/cmake-build-debug /Users/houqinghua/Desktop/ILO/CLionProjects/LongestPalindromicSubstring/cmake-build-debug/CMakeFiles/LongestPalindromicSubstring.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LongestPalindromicSubstring.dir/depend

