# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /snap/clion/73/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/73/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/arun/CLionProjects/TaskScheduler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/arun/CLionProjects/TaskScheduler/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TaskScheduler.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TaskScheduler.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TaskScheduler.dir/flags.make

CMakeFiles/TaskScheduler.dir/main.cpp.o: CMakeFiles/TaskScheduler.dir/flags.make
CMakeFiles/TaskScheduler.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/arun/CLionProjects/TaskScheduler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TaskScheduler.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TaskScheduler.dir/main.cpp.o -c /home/arun/CLionProjects/TaskScheduler/main.cpp

CMakeFiles/TaskScheduler.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TaskScheduler.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/arun/CLionProjects/TaskScheduler/main.cpp > CMakeFiles/TaskScheduler.dir/main.cpp.i

CMakeFiles/TaskScheduler.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TaskScheduler.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/arun/CLionProjects/TaskScheduler/main.cpp -o CMakeFiles/TaskScheduler.dir/main.cpp.s

# Object files for target TaskScheduler
TaskScheduler_OBJECTS = \
"CMakeFiles/TaskScheduler.dir/main.cpp.o"

# External object files for target TaskScheduler
TaskScheduler_EXTERNAL_OBJECTS =

TaskScheduler: CMakeFiles/TaskScheduler.dir/main.cpp.o
TaskScheduler: CMakeFiles/TaskScheduler.dir/build.make
TaskScheduler: CMakeFiles/TaskScheduler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/arun/CLionProjects/TaskScheduler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TaskScheduler"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TaskScheduler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TaskScheduler.dir/build: TaskScheduler

.PHONY : CMakeFiles/TaskScheduler.dir/build

CMakeFiles/TaskScheduler.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TaskScheduler.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TaskScheduler.dir/clean

CMakeFiles/TaskScheduler.dir/depend:
	cd /home/arun/CLionProjects/TaskScheduler/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/arun/CLionProjects/TaskScheduler /home/arun/CLionProjects/TaskScheduler /home/arun/CLionProjects/TaskScheduler/cmake-build-debug /home/arun/CLionProjects/TaskScheduler/cmake-build-debug /home/arun/CLionProjects/TaskScheduler/cmake-build-debug/CMakeFiles/TaskScheduler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TaskScheduler.dir/depend

