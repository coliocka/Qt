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
CMAKE_SOURCE_DIR = /home/crucal/workspace/myqt/qt6/sieve_pool

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/crucal/workspace/myqt/qt6/sieve_pool/build

# Utility rule file for sieve_pool_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/sieve_pool_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/sieve_pool_autogen.dir/progress.make

CMakeFiles/sieve_pool_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/crucal/workspace/myqt/qt6/sieve_pool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target sieve_pool"
	/usr/bin/cmake -E cmake_autogen /home/crucal/workspace/myqt/qt6/sieve_pool/build/CMakeFiles/sieve_pool_autogen.dir/AutogenInfo.json ""

sieve_pool_autogen: CMakeFiles/sieve_pool_autogen
sieve_pool_autogen: CMakeFiles/sieve_pool_autogen.dir/build.make
.PHONY : sieve_pool_autogen

# Rule to build all files generated by this target.
CMakeFiles/sieve_pool_autogen.dir/build: sieve_pool_autogen
.PHONY : CMakeFiles/sieve_pool_autogen.dir/build

CMakeFiles/sieve_pool_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sieve_pool_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sieve_pool_autogen.dir/clean

CMakeFiles/sieve_pool_autogen.dir/depend:
	cd /home/crucal/workspace/myqt/qt6/sieve_pool/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/crucal/workspace/myqt/qt6/sieve_pool /home/crucal/workspace/myqt/qt6/sieve_pool /home/crucal/workspace/myqt/qt6/sieve_pool/build /home/crucal/workspace/myqt/qt6/sieve_pool/build /home/crucal/workspace/myqt/qt6/sieve_pool/build/CMakeFiles/sieve_pool_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sieve_pool_autogen.dir/depend

