# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/tenbullets/Рабочий стол/hw05"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/tenbullets/Рабочий стол/hw05/build"

# Include any dependencies generated for this target.
include tests/CMakeFiles/hw05_test.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/hw05_test.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/hw05_test.dir/flags.make

tests/CMakeFiles/hw05_test.dir/hw05_test.o: tests/CMakeFiles/hw05_test.dir/flags.make
tests/CMakeFiles/hw05_test.dir/hw05_test.o: ../tests/hw05_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/tenbullets/Рабочий стол/hw05/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/hw05_test.dir/hw05_test.o"
	cd "/home/tenbullets/Рабочий стол/hw05/build/tests" && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw05_test.dir/hw05_test.o -c "/home/tenbullets/Рабочий стол/hw05/tests/hw05_test.cpp"

tests/CMakeFiles/hw05_test.dir/hw05_test.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw05_test.dir/hw05_test.i"
	cd "/home/tenbullets/Рабочий стол/hw05/build/tests" && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/tenbullets/Рабочий стол/hw05/tests/hw05_test.cpp" > CMakeFiles/hw05_test.dir/hw05_test.i

tests/CMakeFiles/hw05_test.dir/hw05_test.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw05_test.dir/hw05_test.s"
	cd "/home/tenbullets/Рабочий стол/hw05/build/tests" && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/tenbullets/Рабочий стол/hw05/tests/hw05_test.cpp" -o CMakeFiles/hw05_test.dir/hw05_test.s

# Object files for target hw05_test
hw05_test_OBJECTS = \
"CMakeFiles/hw05_test.dir/hw05_test.o"

# External object files for target hw05_test
hw05_test_EXTERNAL_OBJECTS =

tests/hw05_test: tests/CMakeFiles/hw05_test.dir/hw05_test.o
tests/hw05_test: tests/CMakeFiles/hw05_test.dir/build.make
tests/hw05_test: src/libhw05.a
tests/hw05_test: tests/CMakeFiles/hw05_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/tenbullets/Рабочий стол/hw05/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hw05_test"
	cd "/home/tenbullets/Рабочий стол/hw05/build/tests" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hw05_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/hw05_test.dir/build: tests/hw05_test

.PHONY : tests/CMakeFiles/hw05_test.dir/build

tests/CMakeFiles/hw05_test.dir/clean:
	cd "/home/tenbullets/Рабочий стол/hw05/build/tests" && $(CMAKE_COMMAND) -P CMakeFiles/hw05_test.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/hw05_test.dir/clean

tests/CMakeFiles/hw05_test.dir/depend:
	cd "/home/tenbullets/Рабочий стол/hw05/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/tenbullets/Рабочий стол/hw05" "/home/tenbullets/Рабочий стол/hw05/tests" "/home/tenbullets/Рабочий стол/hw05/build" "/home/tenbullets/Рабочий стол/hw05/build/tests" "/home/tenbullets/Рабочий стол/hw05/build/tests/CMakeFiles/hw05_test.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : tests/CMakeFiles/hw05_test.dir/depend
