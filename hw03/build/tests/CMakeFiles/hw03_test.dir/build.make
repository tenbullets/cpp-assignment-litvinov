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
CMAKE_SOURCE_DIR = "/home/tenbullets/Рабочий стол/hw03"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/tenbullets/Рабочий стол/hw03/build"

# Include any dependencies generated for this target.
include tests/CMakeFiles/hw03_test.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/hw03_test.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/hw03_test.dir/flags.make

tests/CMakeFiles/hw03_test.dir/hw03_test.o: tests/CMakeFiles/hw03_test.dir/flags.make
tests/CMakeFiles/hw03_test.dir/hw03_test.o: ../tests/hw03_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/tenbullets/Рабочий стол/hw03/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/hw03_test.dir/hw03_test.o"
	cd "/home/tenbullets/Рабочий стол/hw03/build/tests" && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw03_test.dir/hw03_test.o -c "/home/tenbullets/Рабочий стол/hw03/tests/hw03_test.cpp"

tests/CMakeFiles/hw03_test.dir/hw03_test.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw03_test.dir/hw03_test.i"
	cd "/home/tenbullets/Рабочий стол/hw03/build/tests" && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/tenbullets/Рабочий стол/hw03/tests/hw03_test.cpp" > CMakeFiles/hw03_test.dir/hw03_test.i

tests/CMakeFiles/hw03_test.dir/hw03_test.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw03_test.dir/hw03_test.s"
	cd "/home/tenbullets/Рабочий стол/hw03/build/tests" && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/tenbullets/Рабочий стол/hw03/tests/hw03_test.cpp" -o CMakeFiles/hw03_test.dir/hw03_test.s

# Object files for target hw03_test
hw03_test_OBJECTS = \
"CMakeFiles/hw03_test.dir/hw03_test.o"

# External object files for target hw03_test
hw03_test_EXTERNAL_OBJECTS =

tests/hw03_test: tests/CMakeFiles/hw03_test.dir/hw03_test.o
tests/hw03_test: tests/CMakeFiles/hw03_test.dir/build.make
tests/hw03_test: src/libhw03.a
tests/hw03_test: tests/CMakeFiles/hw03_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/tenbullets/Рабочий стол/hw03/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hw03_test"
	cd "/home/tenbullets/Рабочий стол/hw03/build/tests" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hw03_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/hw03_test.dir/build: tests/hw03_test

.PHONY : tests/CMakeFiles/hw03_test.dir/build

tests/CMakeFiles/hw03_test.dir/clean:
	cd "/home/tenbullets/Рабочий стол/hw03/build/tests" && $(CMAKE_COMMAND) -P CMakeFiles/hw03_test.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/hw03_test.dir/clean

tests/CMakeFiles/hw03_test.dir/depend:
	cd "/home/tenbullets/Рабочий стол/hw03/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/tenbullets/Рабочий стол/hw03" "/home/tenbullets/Рабочий стол/hw03/tests" "/home/tenbullets/Рабочий стол/hw03/build" "/home/tenbullets/Рабочий стол/hw03/build/tests" "/home/tenbullets/Рабочий стол/hw03/build/tests/CMakeFiles/hw03_test.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : tests/CMakeFiles/hw03_test.dir/depend

