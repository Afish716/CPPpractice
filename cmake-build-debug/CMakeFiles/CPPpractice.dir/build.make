# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\program file\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\program file\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\CPPpractice

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CPPpractice\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CPPpractice.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CPPpractice.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CPPpractice.dir/flags.make

CMakeFiles/CPPpractice.dir/main.cpp.obj: CMakeFiles/CPPpractice.dir/flags.make
CMakeFiles/CPPpractice.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CPPpractice\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CPPpractice.dir/main.cpp.obj"
	D:\mingw\mingw-w64_64bit\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CPPpractice.dir\main.cpp.obj -c D:\CPPpractice\main.cpp

CMakeFiles/CPPpractice.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPpractice.dir/main.cpp.i"
	D:\mingw\mingw-w64_64bit\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CPPpractice\main.cpp > CMakeFiles\CPPpractice.dir\main.cpp.i

CMakeFiles/CPPpractice.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPpractice.dir/main.cpp.s"
	D:\mingw\mingw-w64_64bit\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CPPpractice\main.cpp -o CMakeFiles\CPPpractice.dir\main.cpp.s

# Object files for target CPPpractice
CPPpractice_OBJECTS = \
"CMakeFiles/CPPpractice.dir/main.cpp.obj"

# External object files for target CPPpractice
CPPpractice_EXTERNAL_OBJECTS =

CPPpractice.exe: CMakeFiles/CPPpractice.dir/main.cpp.obj
CPPpractice.exe: CMakeFiles/CPPpractice.dir/build.make
CPPpractice.exe: CMakeFiles/CPPpractice.dir/linklibs.rsp
CPPpractice.exe: CMakeFiles/CPPpractice.dir/objects1.rsp
CPPpractice.exe: CMakeFiles/CPPpractice.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CPPpractice\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CPPpractice.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CPPpractice.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CPPpractice.dir/build: CPPpractice.exe

.PHONY : CMakeFiles/CPPpractice.dir/build

CMakeFiles/CPPpractice.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CPPpractice.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CPPpractice.dir/clean

CMakeFiles/CPPpractice.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CPPpractice D:\CPPpractice D:\CPPpractice\cmake-build-debug D:\CPPpractice\cmake-build-debug D:\CPPpractice\cmake-build-debug\CMakeFiles\CPPpractice.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CPPpractice.dir/depend
