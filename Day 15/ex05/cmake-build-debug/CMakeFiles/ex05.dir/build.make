# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /home/arthur/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.6682.181/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/arthur/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.6682.181/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/arthur/Epitech/tek2/PoolCPP/B-CPP-300-STG-3-1-CPPD15-arthur.robine/ex05

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/arthur/Epitech/tek2/PoolCPP/B-CPP-300-STG-3-1-CPPD15-arthur.robine/ex05/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex05.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex05.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex05.dir/flags.make

CMakeFiles/ex05.dir/main.cpp.o: CMakeFiles/ex05.dir/flags.make
CMakeFiles/ex05.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/arthur/Epitech/tek2/PoolCPP/B-CPP-300-STG-3-1-CPPD15-arthur.robine/ex05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex05.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex05.dir/main.cpp.o -c /home/arthur/Epitech/tek2/PoolCPP/B-CPP-300-STG-3-1-CPPD15-arthur.robine/ex05/main.cpp

CMakeFiles/ex05.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex05.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/arthur/Epitech/tek2/PoolCPP/B-CPP-300-STG-3-1-CPPD15-arthur.robine/ex05/main.cpp > CMakeFiles/ex05.dir/main.cpp.i

CMakeFiles/ex05.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex05.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/arthur/Epitech/tek2/PoolCPP/B-CPP-300-STG-3-1-CPPD15-arthur.robine/ex05/main.cpp -o CMakeFiles/ex05.dir/main.cpp.s

# Object files for target ex05
ex05_OBJECTS = \
"CMakeFiles/ex05.dir/main.cpp.o"

# External object files for target ex05
ex05_EXTERNAL_OBJECTS =

ex05: CMakeFiles/ex05.dir/main.cpp.o
ex05: CMakeFiles/ex05.dir/build.make
ex05: CMakeFiles/ex05.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/arthur/Epitech/tek2/PoolCPP/B-CPP-300-STG-3-1-CPPD15-arthur.robine/ex05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ex05"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex05.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex05.dir/build: ex05

.PHONY : CMakeFiles/ex05.dir/build

CMakeFiles/ex05.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex05.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex05.dir/clean

CMakeFiles/ex05.dir/depend:
	cd /home/arthur/Epitech/tek2/PoolCPP/B-CPP-300-STG-3-1-CPPD15-arthur.robine/ex05/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/arthur/Epitech/tek2/PoolCPP/B-CPP-300-STG-3-1-CPPD15-arthur.robine/ex05 /home/arthur/Epitech/tek2/PoolCPP/B-CPP-300-STG-3-1-CPPD15-arthur.robine/ex05 /home/arthur/Epitech/tek2/PoolCPP/B-CPP-300-STG-3-1-CPPD15-arthur.robine/ex05/cmake-build-debug /home/arthur/Epitech/tek2/PoolCPP/B-CPP-300-STG-3-1-CPPD15-arthur.robine/ex05/cmake-build-debug /home/arthur/Epitech/tek2/PoolCPP/B-CPP-300-STG-3-1-CPPD15-arthur.robine/ex05/cmake-build-debug/CMakeFiles/ex05.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex05.dir/depend

