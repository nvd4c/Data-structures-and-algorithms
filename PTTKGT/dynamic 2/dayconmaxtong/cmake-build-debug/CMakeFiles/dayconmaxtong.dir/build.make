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
CMAKE_SOURCE_DIR = "C:\Users\Admin\Desktop\PTTKGT\dynamic 2\dayconmaxtong"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Admin\Desktop\PTTKGT\dynamic 2\dayconmaxtong\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/dayconmaxtong.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/dayconmaxtong.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dayconmaxtong.dir/flags.make

CMakeFiles/dayconmaxtong.dir/main.cpp.obj: CMakeFiles/dayconmaxtong.dir/flags.make
CMakeFiles/dayconmaxtong.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Admin\Desktop\PTTKGT\dynamic 2\dayconmaxtong\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dayconmaxtong.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\dayconmaxtong.dir\main.cpp.obj -c "C:\Users\Admin\Desktop\PTTKGT\dynamic 2\dayconmaxtong\main.cpp"

CMakeFiles/dayconmaxtong.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dayconmaxtong.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Admin\Desktop\PTTKGT\dynamic 2\dayconmaxtong\main.cpp" > CMakeFiles\dayconmaxtong.dir\main.cpp.i

CMakeFiles/dayconmaxtong.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dayconmaxtong.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Admin\Desktop\PTTKGT\dynamic 2\dayconmaxtong\main.cpp" -o CMakeFiles\dayconmaxtong.dir\main.cpp.s

# Object files for target dayconmaxtong
dayconmaxtong_OBJECTS = \
"CMakeFiles/dayconmaxtong.dir/main.cpp.obj"

# External object files for target dayconmaxtong
dayconmaxtong_EXTERNAL_OBJECTS =

dayconmaxtong.exe: CMakeFiles/dayconmaxtong.dir/main.cpp.obj
dayconmaxtong.exe: CMakeFiles/dayconmaxtong.dir/build.make
dayconmaxtong.exe: CMakeFiles/dayconmaxtong.dir/linklibs.rsp
dayconmaxtong.exe: CMakeFiles/dayconmaxtong.dir/objects1.rsp
dayconmaxtong.exe: CMakeFiles/dayconmaxtong.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Admin\Desktop\PTTKGT\dynamic 2\dayconmaxtong\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dayconmaxtong.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\dayconmaxtong.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dayconmaxtong.dir/build: dayconmaxtong.exe
.PHONY : CMakeFiles/dayconmaxtong.dir/build

CMakeFiles/dayconmaxtong.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\dayconmaxtong.dir\cmake_clean.cmake
.PHONY : CMakeFiles/dayconmaxtong.dir/clean

CMakeFiles/dayconmaxtong.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Admin\Desktop\PTTKGT\dynamic 2\dayconmaxtong" "C:\Users\Admin\Desktop\PTTKGT\dynamic 2\dayconmaxtong" "C:\Users\Admin\Desktop\PTTKGT\dynamic 2\dayconmaxtong\cmake-build-debug" "C:\Users\Admin\Desktop\PTTKGT\dynamic 2\dayconmaxtong\cmake-build-debug" "C:\Users\Admin\Desktop\PTTKGT\dynamic 2\dayconmaxtong\cmake-build-debug\CMakeFiles\dayconmaxtong.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/dayconmaxtong.dir/depend
