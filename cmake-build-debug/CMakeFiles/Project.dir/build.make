# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/ressay/Intellij-IDEs/clion-2017.1.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/ressay/Intellij-IDEs/clion-2017.1.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ressay/StudiesTPM2/Vision/Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ressay/StudiesTPM2/Vision/Project/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Project.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project.dir/flags.make

main.moc: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ressay/StudiesTPM2/Vision/Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating main.moc"
	/usr/lib/x86_64-linux-gnu/qt5/bin/moc @/home/ressay/StudiesTPM2/Vision/Project/cmake-build-debug/main.moc_parameters

CMakeFiles/Project.dir/main.cpp.o: CMakeFiles/Project.dir/flags.make
CMakeFiles/Project.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ressay/StudiesTPM2/Vision/Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Project.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project.dir/main.cpp.o -c /home/ressay/StudiesTPM2/Vision/Project/main.cpp

CMakeFiles/Project.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ressay/StudiesTPM2/Vision/Project/main.cpp > CMakeFiles/Project.dir/main.cpp.i

CMakeFiles/Project.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ressay/StudiesTPM2/Vision/Project/main.cpp -o CMakeFiles/Project.dir/main.cpp.s

CMakeFiles/Project.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Project.dir/main.cpp.o.requires

CMakeFiles/Project.dir/main.cpp.o.provides: CMakeFiles/Project.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project.dir/build.make CMakeFiles/Project.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Project.dir/main.cpp.o.provides

CMakeFiles/Project.dir/main.cpp.o.provides.build: CMakeFiles/Project.dir/main.cpp.o


CMakeFiles/Project.dir/Useful/BasicMethods.cpp.o: CMakeFiles/Project.dir/flags.make
CMakeFiles/Project.dir/Useful/BasicMethods.cpp.o: ../Useful/BasicMethods.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ressay/StudiesTPM2/Vision/Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Project.dir/Useful/BasicMethods.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project.dir/Useful/BasicMethods.cpp.o -c /home/ressay/StudiesTPM2/Vision/Project/Useful/BasicMethods.cpp

CMakeFiles/Project.dir/Useful/BasicMethods.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project.dir/Useful/BasicMethods.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ressay/StudiesTPM2/Vision/Project/Useful/BasicMethods.cpp > CMakeFiles/Project.dir/Useful/BasicMethods.cpp.i

CMakeFiles/Project.dir/Useful/BasicMethods.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project.dir/Useful/BasicMethods.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ressay/StudiesTPM2/Vision/Project/Useful/BasicMethods.cpp -o CMakeFiles/Project.dir/Useful/BasicMethods.cpp.s

CMakeFiles/Project.dir/Useful/BasicMethods.cpp.o.requires:

.PHONY : CMakeFiles/Project.dir/Useful/BasicMethods.cpp.o.requires

CMakeFiles/Project.dir/Useful/BasicMethods.cpp.o.provides: CMakeFiles/Project.dir/Useful/BasicMethods.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project.dir/build.make CMakeFiles/Project.dir/Useful/BasicMethods.cpp.o.provides.build
.PHONY : CMakeFiles/Project.dir/Useful/BasicMethods.cpp.o.provides

CMakeFiles/Project.dir/Useful/BasicMethods.cpp.o.provides.build: CMakeFiles/Project.dir/Useful/BasicMethods.cpp.o


CMakeFiles/Project.dir/Useful/Displayer.cpp.o: CMakeFiles/Project.dir/flags.make
CMakeFiles/Project.dir/Useful/Displayer.cpp.o: ../Useful/Displayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ressay/StudiesTPM2/Vision/Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Project.dir/Useful/Displayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project.dir/Useful/Displayer.cpp.o -c /home/ressay/StudiesTPM2/Vision/Project/Useful/Displayer.cpp

CMakeFiles/Project.dir/Useful/Displayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project.dir/Useful/Displayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ressay/StudiesTPM2/Vision/Project/Useful/Displayer.cpp > CMakeFiles/Project.dir/Useful/Displayer.cpp.i

CMakeFiles/Project.dir/Useful/Displayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project.dir/Useful/Displayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ressay/StudiesTPM2/Vision/Project/Useful/Displayer.cpp -o CMakeFiles/Project.dir/Useful/Displayer.cpp.s

CMakeFiles/Project.dir/Useful/Displayer.cpp.o.requires:

.PHONY : CMakeFiles/Project.dir/Useful/Displayer.cpp.o.requires

CMakeFiles/Project.dir/Useful/Displayer.cpp.o.provides: CMakeFiles/Project.dir/Useful/Displayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project.dir/build.make CMakeFiles/Project.dir/Useful/Displayer.cpp.o.provides.build
.PHONY : CMakeFiles/Project.dir/Useful/Displayer.cpp.o.provides

CMakeFiles/Project.dir/Useful/Displayer.cpp.o.provides.build: CMakeFiles/Project.dir/Useful/Displayer.cpp.o


CMakeFiles/Project.dir/DetectingMethods/DetectionPolicy.cpp.o: CMakeFiles/Project.dir/flags.make
CMakeFiles/Project.dir/DetectingMethods/DetectionPolicy.cpp.o: ../DetectingMethods/DetectionPolicy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ressay/StudiesTPM2/Vision/Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Project.dir/DetectingMethods/DetectionPolicy.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project.dir/DetectingMethods/DetectionPolicy.cpp.o -c /home/ressay/StudiesTPM2/Vision/Project/DetectingMethods/DetectionPolicy.cpp

CMakeFiles/Project.dir/DetectingMethods/DetectionPolicy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project.dir/DetectingMethods/DetectionPolicy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ressay/StudiesTPM2/Vision/Project/DetectingMethods/DetectionPolicy.cpp > CMakeFiles/Project.dir/DetectingMethods/DetectionPolicy.cpp.i

CMakeFiles/Project.dir/DetectingMethods/DetectionPolicy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project.dir/DetectingMethods/DetectionPolicy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ressay/StudiesTPM2/Vision/Project/DetectingMethods/DetectionPolicy.cpp -o CMakeFiles/Project.dir/DetectingMethods/DetectionPolicy.cpp.s

CMakeFiles/Project.dir/DetectingMethods/DetectionPolicy.cpp.o.requires:

.PHONY : CMakeFiles/Project.dir/DetectingMethods/DetectionPolicy.cpp.o.requires

CMakeFiles/Project.dir/DetectingMethods/DetectionPolicy.cpp.o.provides: CMakeFiles/Project.dir/DetectingMethods/DetectionPolicy.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project.dir/build.make CMakeFiles/Project.dir/DetectingMethods/DetectionPolicy.cpp.o.provides.build
.PHONY : CMakeFiles/Project.dir/DetectingMethods/DetectionPolicy.cpp.o.provides

CMakeFiles/Project.dir/DetectingMethods/DetectionPolicy.cpp.o.provides.build: CMakeFiles/Project.dir/DetectingMethods/DetectionPolicy.cpp.o


CMakeFiles/Project.dir/mainUI.cpp.o: CMakeFiles/Project.dir/flags.make
CMakeFiles/Project.dir/mainUI.cpp.o: ../mainUI.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ressay/StudiesTPM2/Vision/Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Project.dir/mainUI.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project.dir/mainUI.cpp.o -c /home/ressay/StudiesTPM2/Vision/Project/mainUI.cpp

CMakeFiles/Project.dir/mainUI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project.dir/mainUI.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ressay/StudiesTPM2/Vision/Project/mainUI.cpp > CMakeFiles/Project.dir/mainUI.cpp.i

CMakeFiles/Project.dir/mainUI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project.dir/mainUI.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ressay/StudiesTPM2/Vision/Project/mainUI.cpp -o CMakeFiles/Project.dir/mainUI.cpp.s

CMakeFiles/Project.dir/mainUI.cpp.o.requires:

.PHONY : CMakeFiles/Project.dir/mainUI.cpp.o.requires

CMakeFiles/Project.dir/mainUI.cpp.o.provides: CMakeFiles/Project.dir/mainUI.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project.dir/build.make CMakeFiles/Project.dir/mainUI.cpp.o.provides.build
.PHONY : CMakeFiles/Project.dir/mainUI.cpp.o.provides

CMakeFiles/Project.dir/mainUI.cpp.o.provides.build: CMakeFiles/Project.dir/mainUI.cpp.o


CMakeFiles/Project.dir/qrc_testqt.cpp.o: CMakeFiles/Project.dir/flags.make
CMakeFiles/Project.dir/qrc_testqt.cpp.o: ../qrc_testqt.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ressay/StudiesTPM2/Vision/Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Project.dir/qrc_testqt.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project.dir/qrc_testqt.cpp.o -c /home/ressay/StudiesTPM2/Vision/Project/qrc_testqt.cpp

CMakeFiles/Project.dir/qrc_testqt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project.dir/qrc_testqt.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ressay/StudiesTPM2/Vision/Project/qrc_testqt.cpp > CMakeFiles/Project.dir/qrc_testqt.cpp.i

CMakeFiles/Project.dir/qrc_testqt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project.dir/qrc_testqt.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ressay/StudiesTPM2/Vision/Project/qrc_testqt.cpp -o CMakeFiles/Project.dir/qrc_testqt.cpp.s

CMakeFiles/Project.dir/qrc_testqt.cpp.o.requires:

.PHONY : CMakeFiles/Project.dir/qrc_testqt.cpp.o.requires

CMakeFiles/Project.dir/qrc_testqt.cpp.o.provides: CMakeFiles/Project.dir/qrc_testqt.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project.dir/build.make CMakeFiles/Project.dir/qrc_testqt.cpp.o.provides.build
.PHONY : CMakeFiles/Project.dir/qrc_testqt.cpp.o.provides

CMakeFiles/Project.dir/qrc_testqt.cpp.o.provides.build: CMakeFiles/Project.dir/qrc_testqt.cpp.o


CMakeFiles/Project.dir/Useful/KeyHandler.cpp.o: CMakeFiles/Project.dir/flags.make
CMakeFiles/Project.dir/Useful/KeyHandler.cpp.o: ../Useful/KeyHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ressay/StudiesTPM2/Vision/Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Project.dir/Useful/KeyHandler.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project.dir/Useful/KeyHandler.cpp.o -c /home/ressay/StudiesTPM2/Vision/Project/Useful/KeyHandler.cpp

CMakeFiles/Project.dir/Useful/KeyHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project.dir/Useful/KeyHandler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ressay/StudiesTPM2/Vision/Project/Useful/KeyHandler.cpp > CMakeFiles/Project.dir/Useful/KeyHandler.cpp.i

CMakeFiles/Project.dir/Useful/KeyHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project.dir/Useful/KeyHandler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ressay/StudiesTPM2/Vision/Project/Useful/KeyHandler.cpp -o CMakeFiles/Project.dir/Useful/KeyHandler.cpp.s

CMakeFiles/Project.dir/Useful/KeyHandler.cpp.o.requires:

.PHONY : CMakeFiles/Project.dir/Useful/KeyHandler.cpp.o.requires

CMakeFiles/Project.dir/Useful/KeyHandler.cpp.o.provides: CMakeFiles/Project.dir/Useful/KeyHandler.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project.dir/build.make CMakeFiles/Project.dir/Useful/KeyHandler.cpp.o.provides.build
.PHONY : CMakeFiles/Project.dir/Useful/KeyHandler.cpp.o.provides

CMakeFiles/Project.dir/Useful/KeyHandler.cpp.o.provides.build: CMakeFiles/Project.dir/Useful/KeyHandler.cpp.o


CMakeFiles/Project.dir/Drawing/Drawer.cpp.o: CMakeFiles/Project.dir/flags.make
CMakeFiles/Project.dir/Drawing/Drawer.cpp.o: ../Drawing/Drawer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ressay/StudiesTPM2/Vision/Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Project.dir/Drawing/Drawer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project.dir/Drawing/Drawer.cpp.o -c /home/ressay/StudiesTPM2/Vision/Project/Drawing/Drawer.cpp

CMakeFiles/Project.dir/Drawing/Drawer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project.dir/Drawing/Drawer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ressay/StudiesTPM2/Vision/Project/Drawing/Drawer.cpp > CMakeFiles/Project.dir/Drawing/Drawer.cpp.i

CMakeFiles/Project.dir/Drawing/Drawer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project.dir/Drawing/Drawer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ressay/StudiesTPM2/Vision/Project/Drawing/Drawer.cpp -o CMakeFiles/Project.dir/Drawing/Drawer.cpp.s

CMakeFiles/Project.dir/Drawing/Drawer.cpp.o.requires:

.PHONY : CMakeFiles/Project.dir/Drawing/Drawer.cpp.o.requires

CMakeFiles/Project.dir/Drawing/Drawer.cpp.o.provides: CMakeFiles/Project.dir/Drawing/Drawer.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project.dir/build.make CMakeFiles/Project.dir/Drawing/Drawer.cpp.o.provides.build
.PHONY : CMakeFiles/Project.dir/Drawing/Drawer.cpp.o.provides

CMakeFiles/Project.dir/Drawing/Drawer.cpp.o.provides.build: CMakeFiles/Project.dir/Drawing/Drawer.cpp.o


CMakeFiles/Project.dir/Drawing/DrawManager.cpp.o: CMakeFiles/Project.dir/flags.make
CMakeFiles/Project.dir/Drawing/DrawManager.cpp.o: ../Drawing/DrawManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ressay/StudiesTPM2/Vision/Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Project.dir/Drawing/DrawManager.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project.dir/Drawing/DrawManager.cpp.o -c /home/ressay/StudiesTPM2/Vision/Project/Drawing/DrawManager.cpp

CMakeFiles/Project.dir/Drawing/DrawManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project.dir/Drawing/DrawManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ressay/StudiesTPM2/Vision/Project/Drawing/DrawManager.cpp > CMakeFiles/Project.dir/Drawing/DrawManager.cpp.i

CMakeFiles/Project.dir/Drawing/DrawManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project.dir/Drawing/DrawManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ressay/StudiesTPM2/Vision/Project/Drawing/DrawManager.cpp -o CMakeFiles/Project.dir/Drawing/DrawManager.cpp.s

CMakeFiles/Project.dir/Drawing/DrawManager.cpp.o.requires:

.PHONY : CMakeFiles/Project.dir/Drawing/DrawManager.cpp.o.requires

CMakeFiles/Project.dir/Drawing/DrawManager.cpp.o.provides: CMakeFiles/Project.dir/Drawing/DrawManager.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project.dir/build.make CMakeFiles/Project.dir/Drawing/DrawManager.cpp.o.provides.build
.PHONY : CMakeFiles/Project.dir/Drawing/DrawManager.cpp.o.provides

CMakeFiles/Project.dir/Drawing/DrawManager.cpp.o.provides.build: CMakeFiles/Project.dir/Drawing/DrawManager.cpp.o


CMakeFiles/Project.dir/Useful/Clusterer.cpp.o: CMakeFiles/Project.dir/flags.make
CMakeFiles/Project.dir/Useful/Clusterer.cpp.o: ../Useful/Clusterer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ressay/StudiesTPM2/Vision/Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Project.dir/Useful/Clusterer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project.dir/Useful/Clusterer.cpp.o -c /home/ressay/StudiesTPM2/Vision/Project/Useful/Clusterer.cpp

CMakeFiles/Project.dir/Useful/Clusterer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project.dir/Useful/Clusterer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ressay/StudiesTPM2/Vision/Project/Useful/Clusterer.cpp > CMakeFiles/Project.dir/Useful/Clusterer.cpp.i

CMakeFiles/Project.dir/Useful/Clusterer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project.dir/Useful/Clusterer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ressay/StudiesTPM2/Vision/Project/Useful/Clusterer.cpp -o CMakeFiles/Project.dir/Useful/Clusterer.cpp.s

CMakeFiles/Project.dir/Useful/Clusterer.cpp.o.requires:

.PHONY : CMakeFiles/Project.dir/Useful/Clusterer.cpp.o.requires

CMakeFiles/Project.dir/Useful/Clusterer.cpp.o.provides: CMakeFiles/Project.dir/Useful/Clusterer.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project.dir/build.make CMakeFiles/Project.dir/Useful/Clusterer.cpp.o.provides.build
.PHONY : CMakeFiles/Project.dir/Useful/Clusterer.cpp.o.provides

CMakeFiles/Project.dir/Useful/Clusterer.cpp.o.provides.build: CMakeFiles/Project.dir/Useful/Clusterer.cpp.o


CMakeFiles/Project.dir/Project_autogen/moc_compilation.cpp.o: CMakeFiles/Project.dir/flags.make
CMakeFiles/Project.dir/Project_autogen/moc_compilation.cpp.o: Project_autogen/moc_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ressay/StudiesTPM2/Vision/Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Project.dir/Project_autogen/moc_compilation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project.dir/Project_autogen/moc_compilation.cpp.o -c /home/ressay/StudiesTPM2/Vision/Project/cmake-build-debug/Project_autogen/moc_compilation.cpp

CMakeFiles/Project.dir/Project_autogen/moc_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project.dir/Project_autogen/moc_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ressay/StudiesTPM2/Vision/Project/cmake-build-debug/Project_autogen/moc_compilation.cpp > CMakeFiles/Project.dir/Project_autogen/moc_compilation.cpp.i

CMakeFiles/Project.dir/Project_autogen/moc_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project.dir/Project_autogen/moc_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ressay/StudiesTPM2/Vision/Project/cmake-build-debug/Project_autogen/moc_compilation.cpp -o CMakeFiles/Project.dir/Project_autogen/moc_compilation.cpp.s

CMakeFiles/Project.dir/Project_autogen/moc_compilation.cpp.o.requires:

.PHONY : CMakeFiles/Project.dir/Project_autogen/moc_compilation.cpp.o.requires

CMakeFiles/Project.dir/Project_autogen/moc_compilation.cpp.o.provides: CMakeFiles/Project.dir/Project_autogen/moc_compilation.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project.dir/build.make CMakeFiles/Project.dir/Project_autogen/moc_compilation.cpp.o.provides.build
.PHONY : CMakeFiles/Project.dir/Project_autogen/moc_compilation.cpp.o.provides

CMakeFiles/Project.dir/Project_autogen/moc_compilation.cpp.o.provides.build: CMakeFiles/Project.dir/Project_autogen/moc_compilation.cpp.o


# Object files for target Project
Project_OBJECTS = \
"CMakeFiles/Project.dir/main.cpp.o" \
"CMakeFiles/Project.dir/Useful/BasicMethods.cpp.o" \
"CMakeFiles/Project.dir/Useful/Displayer.cpp.o" \
"CMakeFiles/Project.dir/DetectingMethods/DetectionPolicy.cpp.o" \
"CMakeFiles/Project.dir/mainUI.cpp.o" \
"CMakeFiles/Project.dir/qrc_testqt.cpp.o" \
"CMakeFiles/Project.dir/Useful/KeyHandler.cpp.o" \
"CMakeFiles/Project.dir/Drawing/Drawer.cpp.o" \
"CMakeFiles/Project.dir/Drawing/DrawManager.cpp.o" \
"CMakeFiles/Project.dir/Useful/Clusterer.cpp.o" \
"CMakeFiles/Project.dir/Project_autogen/moc_compilation.cpp.o"

# External object files for target Project
Project_EXTERNAL_OBJECTS =

Project: CMakeFiles/Project.dir/main.cpp.o
Project: CMakeFiles/Project.dir/Useful/BasicMethods.cpp.o
Project: CMakeFiles/Project.dir/Useful/Displayer.cpp.o
Project: CMakeFiles/Project.dir/DetectingMethods/DetectionPolicy.cpp.o
Project: CMakeFiles/Project.dir/mainUI.cpp.o
Project: CMakeFiles/Project.dir/qrc_testqt.cpp.o
Project: CMakeFiles/Project.dir/Useful/KeyHandler.cpp.o
Project: CMakeFiles/Project.dir/Drawing/Drawer.cpp.o
Project: CMakeFiles/Project.dir/Drawing/DrawManager.cpp.o
Project: CMakeFiles/Project.dir/Useful/Clusterer.cpp.o
Project: CMakeFiles/Project.dir/Project_autogen/moc_compilation.cpp.o
Project: CMakeFiles/Project.dir/build.make
Project: /usr/local/lib/libopencv_gapi.so.4.0.0
Project: /usr/local/lib/libopencv_videostab.so.4.0.0
Project: /usr/local/lib/libopencv_superres.so.4.0.0
Project: /usr/local/lib/libopencv_stitching.so.4.0.0
Project: /usr/local/lib/libopencv_bioinspired.so.4.0.0
Project: /usr/local/lib/libopencv_line_descriptor.so.4.0.0
Project: /usr/local/lib/libopencv_freetype.so.4.0.0
Project: /usr/local/lib/libopencv_stereo.so.4.0.0
Project: /usr/local/lib/libopencv_reg.so.4.0.0
Project: /usr/local/lib/libopencv_dnn_objdetect.so.4.0.0
Project: /usr/local/lib/libopencv_xfeatures2d.so.4.0.0
Project: /usr/local/lib/libopencv_face.so.4.0.0
Project: /usr/local/lib/libopencv_tracking.so.4.0.0
Project: /usr/local/lib/libopencv_xobjdetect.so.4.0.0
Project: /usr/local/lib/libopencv_dpm.so.4.0.0
Project: /usr/local/lib/libopencv_fuzzy.so.4.0.0
Project: /usr/local/lib/libopencv_saliency.so.4.0.0
Project: /usr/local/lib/libopencv_hfs.so.4.0.0
Project: /usr/local/lib/libopencv_bgsegm.so.4.0.0
Project: /usr/local/lib/libopencv_surface_matching.so.4.0.0
Project: /usr/local/lib/libopencv_img_hash.so.4.0.0
Project: /usr/local/lib/libopencv_xphoto.so.4.0.0
Project: /usr/local/lib/libopencv_structured_light.so.4.0.0
Project: /usr/local/lib/libopencv_aruco.so.4.0.0
Project: /usr/local/lib/libopencv_ccalib.so.4.0.0
Project: /usr/local/lib/libopencv_optflow.so.4.0.0
Project: /usr/local/lib/libopencv_rgbd.so.4.0.0
Project: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.5.1
Project: /usr/lib/x86_64-linux-gnu/libQt5Test.so.5.5.1
Project: /usr/local/lib/libopencv_shape.so.4.0.0
Project: /usr/local/lib/libopencv_photo.so.4.0.0
Project: /usr/local/lib/libopencv_datasets.so.4.0.0
Project: /usr/local/lib/libopencv_text.so.4.0.0
Project: /usr/local/lib/libopencv_dnn.so.4.0.0
Project: /usr/local/lib/libopencv_ml.so.4.0.0
Project: /usr/local/lib/libopencv_plot.so.4.0.0
Project: /usr/local/lib/libopencv_objdetect.so.4.0.0
Project: /usr/local/lib/libopencv_phase_unwrapping.so.4.0.0
Project: /usr/local/lib/libopencv_video.so.4.0.0
Project: /usr/local/lib/libopencv_ximgproc.so.4.0.0
Project: /usr/local/lib/libopencv_calib3d.so.4.0.0
Project: /usr/local/lib/libopencv_features2d.so.4.0.0
Project: /usr/local/lib/libopencv_highgui.so.4.0.0
Project: /usr/local/lib/libopencv_videoio.so.4.0.0
Project: /usr/local/lib/libopencv_imgcodecs.so.4.0.0
Project: /usr/local/lib/libopencv_imgproc.so.4.0.0
Project: /usr/local/lib/libopencv_flann.so.4.0.0
Project: /usr/local/lib/libopencv_core.so.4.0.0
Project: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.5.1
Project: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.5.1
Project: CMakeFiles/Project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ressay/StudiesTPM2/Vision/Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable Project"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Project.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project.dir/build: Project

.PHONY : CMakeFiles/Project.dir/build

CMakeFiles/Project.dir/requires: CMakeFiles/Project.dir/main.cpp.o.requires
CMakeFiles/Project.dir/requires: CMakeFiles/Project.dir/Useful/BasicMethods.cpp.o.requires
CMakeFiles/Project.dir/requires: CMakeFiles/Project.dir/Useful/Displayer.cpp.o.requires
CMakeFiles/Project.dir/requires: CMakeFiles/Project.dir/DetectingMethods/DetectionPolicy.cpp.o.requires
CMakeFiles/Project.dir/requires: CMakeFiles/Project.dir/mainUI.cpp.o.requires
CMakeFiles/Project.dir/requires: CMakeFiles/Project.dir/qrc_testqt.cpp.o.requires
CMakeFiles/Project.dir/requires: CMakeFiles/Project.dir/Useful/KeyHandler.cpp.o.requires
CMakeFiles/Project.dir/requires: CMakeFiles/Project.dir/Drawing/Drawer.cpp.o.requires
CMakeFiles/Project.dir/requires: CMakeFiles/Project.dir/Drawing/DrawManager.cpp.o.requires
CMakeFiles/Project.dir/requires: CMakeFiles/Project.dir/Useful/Clusterer.cpp.o.requires
CMakeFiles/Project.dir/requires: CMakeFiles/Project.dir/Project_autogen/moc_compilation.cpp.o.requires

.PHONY : CMakeFiles/Project.dir/requires

CMakeFiles/Project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Project.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Project.dir/clean

CMakeFiles/Project.dir/depend: main.moc
	cd /home/ressay/StudiesTPM2/Vision/Project/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ressay/StudiesTPM2/Vision/Project /home/ressay/StudiesTPM2/Vision/Project /home/ressay/StudiesTPM2/Vision/Project/cmake-build-debug /home/ressay/StudiesTPM2/Vision/Project/cmake-build-debug /home/ressay/StudiesTPM2/Vision/Project/cmake-build-debug/CMakeFiles/Project.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Project.dir/depend

