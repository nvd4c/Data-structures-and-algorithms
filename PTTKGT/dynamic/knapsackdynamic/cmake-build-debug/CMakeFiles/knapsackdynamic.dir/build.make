# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Admin\Desktop\PTTKGT\dynamic\knapsackdynamic

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Admin\Desktop\PTTKGT\dynamic\knapsackdynamic\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/knapsackdynamic.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/knapsackdynamic.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/knapsackdynamic.dir/flags.make

CMakeFiles/knapsackdynamic.dir/main.cpp.obj: CMakeFiles/knapsackdynamic.dir/flags.make
CMakeFiles/knapsackdynamic.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Admin\Desktop\PTTKGT\dynamic\knapsackdynamic\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/knapsackdynamic.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\knapsackdynamic.dir\main.cpp.obj -c C:\Users\Admin\Desktop\PTTKGT\dynamic\knapsackdynamic\main.cpp

CMakeFiles/knapsackdynamic.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/knapsackdynamic.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Admin\Desktop\PTTKGT\dynamic\knapsackdynamic\main.cpp > CMakeFiles\knapsackdynamic.dir\main.cpp.i

CMakeFiles/knapsackdynamic.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/knapsackdynamic.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Admin\Desktop\PTTKGT\dynamic\knapsackdynamic\main.cpp -o CMakeFiles\knapsackdynamic.dir\main.cpp.s

# Object files for target knapsackdynamic
knapsackdynamic_OBJECTS = \
"CMakeFiles/knapsackdynamic.dir/main.cpp.obj"

# External object files for target knapsackdynamic
knapsackdynamic_EXTERNAL_OBJECTS =

knapsackdynamic.exe: CMakeFiles/knapsackdynamic.dir/main.cpp.obj
knapsackdynamic.exe: CMakeFiles/knapsackdynamic.dir/build.make
knapsackdynamic.exe: CMakeFiles/knapsackdynamic.dir/linklibs.rsp
knapsackdynamic.exe: CMakeFiles/knapsackdynamic.dir/objects1.rsp
knapsackdynamic.exe: CMakeFiles/knapsackdynamic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Admin\Desktop\PTTKGT\dynamic\knapsackdynamic\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable knapsackdynamic.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\knapsackdynamic.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/knapsackdynamic.dir/build: knapsackdynamic.exe
.PHONY : CMakeFiles/knapsackdynamic.dir/build

CMakeFiles/knapsackdynamic.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\knapsackdynamic.dir\cmake_clean.cmake
.PHONY : CMakeFiles/knapsackdynamic.dir/clean

CMakeFiles/knapsackdynamic.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Admin\Desktop\PTTKGT\dynamic\knapsackdynamic C:\Users\Admin\Desktop\PTTKGT\dynamic\knapsackdynamic C:\Users\Admin\Desktop\PTTKGT\dynamic\knapsackdynamic\cmake-build-debug C:\Users\Admin\Desktop\PTTKGT\dynamic\knapsackdynamic\cmake-build-debug C:\Users\Admin\Desktop\PTTKGT\dynamic\knapsackdynamic\cmake-build-debug\CMakeFiles\knapsackdynamic.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/knapsackdynamic.dir/depend

