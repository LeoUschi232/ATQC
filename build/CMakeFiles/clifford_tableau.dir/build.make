# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_SOURCE_DIR = /home/leouscin/Documents/TUM_Studium/SEM_9/ATQC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/leouscin/Documents/TUM_Studium/SEM_9/ATQC/build

# Include any dependencies generated for this target.
include CMakeFiles/clifford_tableau.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/clifford_tableau.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/clifford_tableau.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/clifford_tableau.dir/flags.make

CMakeFiles/clifford_tableau.dir/codegen:
.PHONY : CMakeFiles/clifford_tableau.dir/codegen

CMakeFiles/clifford_tableau.dir/main.cpp.o: CMakeFiles/clifford_tableau.dir/flags.make
CMakeFiles/clifford_tableau.dir/main.cpp.o: /home/leouscin/Documents/TUM_Studium/SEM_9/ATQC/main.cpp
CMakeFiles/clifford_tableau.dir/main.cpp.o: CMakeFiles/clifford_tableau.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/leouscin/Documents/TUM_Studium/SEM_9/ATQC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/clifford_tableau.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/clifford_tableau.dir/main.cpp.o -MF CMakeFiles/clifford_tableau.dir/main.cpp.o.d -o CMakeFiles/clifford_tableau.dir/main.cpp.o -c /home/leouscin/Documents/TUM_Studium/SEM_9/ATQC/main.cpp

CMakeFiles/clifford_tableau.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/clifford_tableau.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/leouscin/Documents/TUM_Studium/SEM_9/ATQC/main.cpp > CMakeFiles/clifford_tableau.dir/main.cpp.i

CMakeFiles/clifford_tableau.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/clifford_tableau.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/leouscin/Documents/TUM_Studium/SEM_9/ATQC/main.cpp -o CMakeFiles/clifford_tableau.dir/main.cpp.s

# Object files for target clifford_tableau
clifford_tableau_OBJECTS = \
"CMakeFiles/clifford_tableau.dir/main.cpp.o"

# External object files for target clifford_tableau
clifford_tableau_EXTERNAL_OBJECTS =

clifford_tableau: CMakeFiles/clifford_tableau.dir/main.cpp.o
clifford_tableau: CMakeFiles/clifford_tableau.dir/build.make
clifford_tableau: CMakeFiles/clifford_tableau.dir/compiler_depend.ts
clifford_tableau: libQuArrayLib.a
clifford_tableau: CMakeFiles/clifford_tableau.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/leouscin/Documents/TUM_Studium/SEM_9/ATQC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable clifford_tableau"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/clifford_tableau.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/clifford_tableau.dir/build: clifford_tableau
.PHONY : CMakeFiles/clifford_tableau.dir/build

CMakeFiles/clifford_tableau.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/clifford_tableau.dir/cmake_clean.cmake
.PHONY : CMakeFiles/clifford_tableau.dir/clean

CMakeFiles/clifford_tableau.dir/depend:
	cd /home/leouscin/Documents/TUM_Studium/SEM_9/ATQC/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/leouscin/Documents/TUM_Studium/SEM_9/ATQC /home/leouscin/Documents/TUM_Studium/SEM_9/ATQC /home/leouscin/Documents/TUM_Studium/SEM_9/ATQC/build /home/leouscin/Documents/TUM_Studium/SEM_9/ATQC/build /home/leouscin/Documents/TUM_Studium/SEM_9/ATQC/build/CMakeFiles/clifford_tableau.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/clifford_tableau.dir/depend
