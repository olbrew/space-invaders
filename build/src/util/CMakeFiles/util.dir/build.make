# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.1

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.1.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.1.0/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/build"

# Include any dependencies generated for this target.
include src/util/CMakeFiles/util.dir/depend.make

# Include the progress variables for this target.
include src/util/CMakeFiles/util.dir/progress.make

# Include the compile flags for this target's objects.
include src/util/CMakeFiles/util.dir/flags.make

src/util/CMakeFiles/util.dir/Position.cpp.o: src/util/CMakeFiles/util.dir/flags.make
src/util/CMakeFiles/util.dir/Position.cpp.o: ../src/util/Position.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report "/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/build/CMakeFiles" $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/util/CMakeFiles/util.dir/Position.cpp.o"
	cd "/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/build/src/util" && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/util.dir/Position.cpp.o -c "/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/src/util/Position.cpp"

src/util/CMakeFiles/util.dir/Position.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/util.dir/Position.cpp.i"
	cd "/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/build/src/util" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E "/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/src/util/Position.cpp" > CMakeFiles/util.dir/Position.cpp.i

src/util/CMakeFiles/util.dir/Position.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/util.dir/Position.cpp.s"
	cd "/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/build/src/util" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S "/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/src/util/Position.cpp" -o CMakeFiles/util.dir/Position.cpp.s

src/util/CMakeFiles/util.dir/Position.cpp.o.requires:
.PHONY : src/util/CMakeFiles/util.dir/Position.cpp.o.requires

src/util/CMakeFiles/util.dir/Position.cpp.o.provides: src/util/CMakeFiles/util.dir/Position.cpp.o.requires
	$(MAKE) -f src/util/CMakeFiles/util.dir/build.make src/util/CMakeFiles/util.dir/Position.cpp.o.provides.build
.PHONY : src/util/CMakeFiles/util.dir/Position.cpp.o.provides

src/util/CMakeFiles/util.dir/Position.cpp.o.provides.build: src/util/CMakeFiles/util.dir/Position.cpp.o

# Object files for target util
util_OBJECTS = \
"CMakeFiles/util.dir/Position.cpp.o"

# External object files for target util
util_EXTERNAL_OBJECTS =

src/util/libutil.a: src/util/CMakeFiles/util.dir/Position.cpp.o
src/util/libutil.a: src/util/CMakeFiles/util.dir/build.make
src/util/libutil.a: src/util/CMakeFiles/util.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libutil.a"
	cd "/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/build/src/util" && $(CMAKE_COMMAND) -P CMakeFiles/util.dir/cmake_clean_target.cmake
	cd "/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/build/src/util" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/util.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/util/CMakeFiles/util.dir/build: src/util/libutil.a
.PHONY : src/util/CMakeFiles/util.dir/build

src/util/CMakeFiles/util.dir/requires: src/util/CMakeFiles/util.dir/Position.cpp.o.requires
.PHONY : src/util/CMakeFiles/util.dir/requires

src/util/CMakeFiles/util.dir/clean:
	cd "/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/build/src/util" && $(CMAKE_COMMAND) -P CMakeFiles/util.dir/cmake_clean.cmake
.PHONY : src/util/CMakeFiles/util.dir/clean

src/util/CMakeFiles/util.dir/depend:
	cd "/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian" "/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/src/util" "/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/build" "/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/build/src/util" "/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/build/src/util/CMakeFiles/util.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : src/util/CMakeFiles/util.dir/depend

