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
CMAKE_COMMAND = /snap/clion/114/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/114/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ivan/CLionProjects/Zombie_vs_Humans

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ivan/CLionProjects/Zombie_vs_Humans/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Zombie_vs_Humans.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Zombie_vs_Humans.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Zombie_vs_Humans.dir/flags.make

CMakeFiles/Zombie_vs_Humans.dir/Source/main.cpp.o: CMakeFiles/Zombie_vs_Humans.dir/flags.make
CMakeFiles/Zombie_vs_Humans.dir/Source/main.cpp.o: ../Source/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivan/CLionProjects/Zombie_vs_Humans/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Zombie_vs_Humans.dir/Source/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zombie_vs_Humans.dir/Source/main.cpp.o -c /home/ivan/CLionProjects/Zombie_vs_Humans/Source/main.cpp

CMakeFiles/Zombie_vs_Humans.dir/Source/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombie_vs_Humans.dir/Source/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivan/CLionProjects/Zombie_vs_Humans/Source/main.cpp > CMakeFiles/Zombie_vs_Humans.dir/Source/main.cpp.i

CMakeFiles/Zombie_vs_Humans.dir/Source/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombie_vs_Humans.dir/Source/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivan/CLionProjects/Zombie_vs_Humans/Source/main.cpp -o CMakeFiles/Zombie_vs_Humans.dir/Source/main.cpp.s

CMakeFiles/Zombie_vs_Humans.dir/Source/Game.cpp.o: CMakeFiles/Zombie_vs_Humans.dir/flags.make
CMakeFiles/Zombie_vs_Humans.dir/Source/Game.cpp.o: ../Source/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivan/CLionProjects/Zombie_vs_Humans/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Zombie_vs_Humans.dir/Source/Game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zombie_vs_Humans.dir/Source/Game.cpp.o -c /home/ivan/CLionProjects/Zombie_vs_Humans/Source/Game.cpp

CMakeFiles/Zombie_vs_Humans.dir/Source/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombie_vs_Humans.dir/Source/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivan/CLionProjects/Zombie_vs_Humans/Source/Game.cpp > CMakeFiles/Zombie_vs_Humans.dir/Source/Game.cpp.i

CMakeFiles/Zombie_vs_Humans.dir/Source/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombie_vs_Humans.dir/Source/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivan/CLionProjects/Zombie_vs_Humans/Source/Game.cpp -o CMakeFiles/Zombie_vs_Humans.dir/Source/Game.cpp.s

CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/IErrorLog.cpp.o: CMakeFiles/Zombie_vs_Humans.dir/flags.make
CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/IErrorLog.cpp.o: ../ErrorHandling/IErrorLog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivan/CLionProjects/Zombie_vs_Humans/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/IErrorLog.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/IErrorLog.cpp.o -c /home/ivan/CLionProjects/Zombie_vs_Humans/ErrorHandling/IErrorLog.cpp

CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/IErrorLog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/IErrorLog.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivan/CLionProjects/Zombie_vs_Humans/ErrorHandling/IErrorLog.cpp > CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/IErrorLog.cpp.i

CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/IErrorLog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/IErrorLog.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivan/CLionProjects/Zombie_vs_Humans/ErrorHandling/IErrorLog.cpp -o CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/IErrorLog.cpp.s

CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/FileErrorLog.cpp.o: CMakeFiles/Zombie_vs_Humans.dir/flags.make
CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/FileErrorLog.cpp.o: ../ErrorHandling/FileErrorLog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivan/CLionProjects/Zombie_vs_Humans/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/FileErrorLog.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/FileErrorLog.cpp.o -c /home/ivan/CLionProjects/Zombie_vs_Humans/ErrorHandling/FileErrorLog.cpp

CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/FileErrorLog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/FileErrorLog.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivan/CLionProjects/Zombie_vs_Humans/ErrorHandling/FileErrorLog.cpp > CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/FileErrorLog.cpp.i

CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/FileErrorLog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/FileErrorLog.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivan/CLionProjects/Zombie_vs_Humans/ErrorHandling/FileErrorLog.cpp -o CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/FileErrorLog.cpp.s

CMakeFiles/Zombie_vs_Humans.dir/States/MainMenuState.cpp.o: CMakeFiles/Zombie_vs_Humans.dir/flags.make
CMakeFiles/Zombie_vs_Humans.dir/States/MainMenuState.cpp.o: ../States/MainMenuState.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivan/CLionProjects/Zombie_vs_Humans/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Zombie_vs_Humans.dir/States/MainMenuState.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zombie_vs_Humans.dir/States/MainMenuState.cpp.o -c /home/ivan/CLionProjects/Zombie_vs_Humans/States/MainMenuState.cpp

CMakeFiles/Zombie_vs_Humans.dir/States/MainMenuState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombie_vs_Humans.dir/States/MainMenuState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivan/CLionProjects/Zombie_vs_Humans/States/MainMenuState.cpp > CMakeFiles/Zombie_vs_Humans.dir/States/MainMenuState.cpp.i

CMakeFiles/Zombie_vs_Humans.dir/States/MainMenuState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombie_vs_Humans.dir/States/MainMenuState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivan/CLionProjects/Zombie_vs_Humans/States/MainMenuState.cpp -o CMakeFiles/Zombie_vs_Humans.dir/States/MainMenuState.cpp.s

CMakeFiles/Zombie_vs_Humans.dir/graphical_interface/gui.cpp.o: CMakeFiles/Zombie_vs_Humans.dir/flags.make
CMakeFiles/Zombie_vs_Humans.dir/graphical_interface/gui.cpp.o: ../graphical_interface/gui.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivan/CLionProjects/Zombie_vs_Humans/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Zombie_vs_Humans.dir/graphical_interface/gui.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zombie_vs_Humans.dir/graphical_interface/gui.cpp.o -c /home/ivan/CLionProjects/Zombie_vs_Humans/graphical_interface/gui.cpp

CMakeFiles/Zombie_vs_Humans.dir/graphical_interface/gui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombie_vs_Humans.dir/graphical_interface/gui.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivan/CLionProjects/Zombie_vs_Humans/graphical_interface/gui.cpp > CMakeFiles/Zombie_vs_Humans.dir/graphical_interface/gui.cpp.i

CMakeFiles/Zombie_vs_Humans.dir/graphical_interface/gui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombie_vs_Humans.dir/graphical_interface/gui.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivan/CLionProjects/Zombie_vs_Humans/graphical_interface/gui.cpp -o CMakeFiles/Zombie_vs_Humans.dir/graphical_interface/gui.cpp.s

CMakeFiles/Zombie_vs_Humans.dir/States/State.cpp.o: CMakeFiles/Zombie_vs_Humans.dir/flags.make
CMakeFiles/Zombie_vs_Humans.dir/States/State.cpp.o: ../States/State.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivan/CLionProjects/Zombie_vs_Humans/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Zombie_vs_Humans.dir/States/State.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zombie_vs_Humans.dir/States/State.cpp.o -c /home/ivan/CLionProjects/Zombie_vs_Humans/States/State.cpp

CMakeFiles/Zombie_vs_Humans.dir/States/State.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombie_vs_Humans.dir/States/State.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivan/CLionProjects/Zombie_vs_Humans/States/State.cpp > CMakeFiles/Zombie_vs_Humans.dir/States/State.cpp.i

CMakeFiles/Zombie_vs_Humans.dir/States/State.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombie_vs_Humans.dir/States/State.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivan/CLionProjects/Zombie_vs_Humans/States/State.cpp -o CMakeFiles/Zombie_vs_Humans.dir/States/State.cpp.s

CMakeFiles/Zombie_vs_Humans.dir/States/GameState.cpp.o: CMakeFiles/Zombie_vs_Humans.dir/flags.make
CMakeFiles/Zombie_vs_Humans.dir/States/GameState.cpp.o: ../States/GameState.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivan/CLionProjects/Zombie_vs_Humans/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Zombie_vs_Humans.dir/States/GameState.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zombie_vs_Humans.dir/States/GameState.cpp.o -c /home/ivan/CLionProjects/Zombie_vs_Humans/States/GameState.cpp

CMakeFiles/Zombie_vs_Humans.dir/States/GameState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombie_vs_Humans.dir/States/GameState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivan/CLionProjects/Zombie_vs_Humans/States/GameState.cpp > CMakeFiles/Zombie_vs_Humans.dir/States/GameState.cpp.i

CMakeFiles/Zombie_vs_Humans.dir/States/GameState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombie_vs_Humans.dir/States/GameState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivan/CLionProjects/Zombie_vs_Humans/States/GameState.cpp -o CMakeFiles/Zombie_vs_Humans.dir/States/GameState.cpp.s

CMakeFiles/Zombie_vs_Humans.dir/Source/GameTexture.cpp.o: CMakeFiles/Zombie_vs_Humans.dir/flags.make
CMakeFiles/Zombie_vs_Humans.dir/Source/GameTexture.cpp.o: ../Source/GameTexture.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivan/CLionProjects/Zombie_vs_Humans/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Zombie_vs_Humans.dir/Source/GameTexture.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zombie_vs_Humans.dir/Source/GameTexture.cpp.o -c /home/ivan/CLionProjects/Zombie_vs_Humans/Source/GameTexture.cpp

CMakeFiles/Zombie_vs_Humans.dir/Source/GameTexture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombie_vs_Humans.dir/Source/GameTexture.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivan/CLionProjects/Zombie_vs_Humans/Source/GameTexture.cpp > CMakeFiles/Zombie_vs_Humans.dir/Source/GameTexture.cpp.i

CMakeFiles/Zombie_vs_Humans.dir/Source/GameTexture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombie_vs_Humans.dir/Source/GameTexture.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivan/CLionProjects/Zombie_vs_Humans/Source/GameTexture.cpp -o CMakeFiles/Zombie_vs_Humans.dir/Source/GameTexture.cpp.s

CMakeFiles/Zombie_vs_Humans.dir/Components/AnimationComponent.cpp.o: CMakeFiles/Zombie_vs_Humans.dir/flags.make
CMakeFiles/Zombie_vs_Humans.dir/Components/AnimationComponent.cpp.o: ../Components/AnimationComponent.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivan/CLionProjects/Zombie_vs_Humans/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Zombie_vs_Humans.dir/Components/AnimationComponent.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zombie_vs_Humans.dir/Components/AnimationComponent.cpp.o -c /home/ivan/CLionProjects/Zombie_vs_Humans/Components/AnimationComponent.cpp

CMakeFiles/Zombie_vs_Humans.dir/Components/AnimationComponent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombie_vs_Humans.dir/Components/AnimationComponent.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivan/CLionProjects/Zombie_vs_Humans/Components/AnimationComponent.cpp > CMakeFiles/Zombie_vs_Humans.dir/Components/AnimationComponent.cpp.i

CMakeFiles/Zombie_vs_Humans.dir/Components/AnimationComponent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombie_vs_Humans.dir/Components/AnimationComponent.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivan/CLionProjects/Zombie_vs_Humans/Components/AnimationComponent.cpp -o CMakeFiles/Zombie_vs_Humans.dir/Components/AnimationComponent.cpp.s

CMakeFiles/Zombie_vs_Humans.dir/Entities/Entity.cpp.o: CMakeFiles/Zombie_vs_Humans.dir/flags.make
CMakeFiles/Zombie_vs_Humans.dir/Entities/Entity.cpp.o: ../Entities/Entity.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivan/CLionProjects/Zombie_vs_Humans/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Zombie_vs_Humans.dir/Entities/Entity.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zombie_vs_Humans.dir/Entities/Entity.cpp.o -c /home/ivan/CLionProjects/Zombie_vs_Humans/Entities/Entity.cpp

CMakeFiles/Zombie_vs_Humans.dir/Entities/Entity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombie_vs_Humans.dir/Entities/Entity.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivan/CLionProjects/Zombie_vs_Humans/Entities/Entity.cpp > CMakeFiles/Zombie_vs_Humans.dir/Entities/Entity.cpp.i

CMakeFiles/Zombie_vs_Humans.dir/Entities/Entity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombie_vs_Humans.dir/Entities/Entity.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivan/CLionProjects/Zombie_vs_Humans/Entities/Entity.cpp -o CMakeFiles/Zombie_vs_Humans.dir/Entities/Entity.cpp.s

CMakeFiles/Zombie_vs_Humans.dir/Entities/Human.cpp.o: CMakeFiles/Zombie_vs_Humans.dir/flags.make
CMakeFiles/Zombie_vs_Humans.dir/Entities/Human.cpp.o: ../Entities/Human.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivan/CLionProjects/Zombie_vs_Humans/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Zombie_vs_Humans.dir/Entities/Human.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zombie_vs_Humans.dir/Entities/Human.cpp.o -c /home/ivan/CLionProjects/Zombie_vs_Humans/Entities/Human.cpp

CMakeFiles/Zombie_vs_Humans.dir/Entities/Human.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombie_vs_Humans.dir/Entities/Human.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivan/CLionProjects/Zombie_vs_Humans/Entities/Human.cpp > CMakeFiles/Zombie_vs_Humans.dir/Entities/Human.cpp.i

CMakeFiles/Zombie_vs_Humans.dir/Entities/Human.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombie_vs_Humans.dir/Entities/Human.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivan/CLionProjects/Zombie_vs_Humans/Entities/Human.cpp -o CMakeFiles/Zombie_vs_Humans.dir/Entities/Human.cpp.s

CMakeFiles/Zombie_vs_Humans.dir/Components/MovementComponent.cpp.o: CMakeFiles/Zombie_vs_Humans.dir/flags.make
CMakeFiles/Zombie_vs_Humans.dir/Components/MovementComponent.cpp.o: ../Components/MovementComponent.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivan/CLionProjects/Zombie_vs_Humans/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/Zombie_vs_Humans.dir/Components/MovementComponent.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zombie_vs_Humans.dir/Components/MovementComponent.cpp.o -c /home/ivan/CLionProjects/Zombie_vs_Humans/Components/MovementComponent.cpp

CMakeFiles/Zombie_vs_Humans.dir/Components/MovementComponent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombie_vs_Humans.dir/Components/MovementComponent.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivan/CLionProjects/Zombie_vs_Humans/Components/MovementComponent.cpp > CMakeFiles/Zombie_vs_Humans.dir/Components/MovementComponent.cpp.i

CMakeFiles/Zombie_vs_Humans.dir/Components/MovementComponent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombie_vs_Humans.dir/Components/MovementComponent.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivan/CLionProjects/Zombie_vs_Humans/Components/MovementComponent.cpp -o CMakeFiles/Zombie_vs_Humans.dir/Components/MovementComponent.cpp.s

# Object files for target Zombie_vs_Humans
Zombie_vs_Humans_OBJECTS = \
"CMakeFiles/Zombie_vs_Humans.dir/Source/main.cpp.o" \
"CMakeFiles/Zombie_vs_Humans.dir/Source/Game.cpp.o" \
"CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/IErrorLog.cpp.o" \
"CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/FileErrorLog.cpp.o" \
"CMakeFiles/Zombie_vs_Humans.dir/States/MainMenuState.cpp.o" \
"CMakeFiles/Zombie_vs_Humans.dir/graphical_interface/gui.cpp.o" \
"CMakeFiles/Zombie_vs_Humans.dir/States/State.cpp.o" \
"CMakeFiles/Zombie_vs_Humans.dir/States/GameState.cpp.o" \
"CMakeFiles/Zombie_vs_Humans.dir/Source/GameTexture.cpp.o" \
"CMakeFiles/Zombie_vs_Humans.dir/Components/AnimationComponent.cpp.o" \
"CMakeFiles/Zombie_vs_Humans.dir/Entities/Entity.cpp.o" \
"CMakeFiles/Zombie_vs_Humans.dir/Entities/Human.cpp.o" \
"CMakeFiles/Zombie_vs_Humans.dir/Components/MovementComponent.cpp.o"

# External object files for target Zombie_vs_Humans
Zombie_vs_Humans_EXTERNAL_OBJECTS =

Zombie_vs_Humans: CMakeFiles/Zombie_vs_Humans.dir/Source/main.cpp.o
Zombie_vs_Humans: CMakeFiles/Zombie_vs_Humans.dir/Source/Game.cpp.o
Zombie_vs_Humans: CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/IErrorLog.cpp.o
Zombie_vs_Humans: CMakeFiles/Zombie_vs_Humans.dir/ErrorHandling/FileErrorLog.cpp.o
Zombie_vs_Humans: CMakeFiles/Zombie_vs_Humans.dir/States/MainMenuState.cpp.o
Zombie_vs_Humans: CMakeFiles/Zombie_vs_Humans.dir/graphical_interface/gui.cpp.o
Zombie_vs_Humans: CMakeFiles/Zombie_vs_Humans.dir/States/State.cpp.o
Zombie_vs_Humans: CMakeFiles/Zombie_vs_Humans.dir/States/GameState.cpp.o
Zombie_vs_Humans: CMakeFiles/Zombie_vs_Humans.dir/Source/GameTexture.cpp.o
Zombie_vs_Humans: CMakeFiles/Zombie_vs_Humans.dir/Components/AnimationComponent.cpp.o
Zombie_vs_Humans: CMakeFiles/Zombie_vs_Humans.dir/Entities/Entity.cpp.o
Zombie_vs_Humans: CMakeFiles/Zombie_vs_Humans.dir/Entities/Human.cpp.o
Zombie_vs_Humans: CMakeFiles/Zombie_vs_Humans.dir/Components/MovementComponent.cpp.o
Zombie_vs_Humans: CMakeFiles/Zombie_vs_Humans.dir/build.make
Zombie_vs_Humans: CMakeFiles/Zombie_vs_Humans.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ivan/CLionProjects/Zombie_vs_Humans/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX executable Zombie_vs_Humans"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Zombie_vs_Humans.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Zombie_vs_Humans.dir/build: Zombie_vs_Humans

.PHONY : CMakeFiles/Zombie_vs_Humans.dir/build

CMakeFiles/Zombie_vs_Humans.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Zombie_vs_Humans.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Zombie_vs_Humans.dir/clean

CMakeFiles/Zombie_vs_Humans.dir/depend:
	cd /home/ivan/CLionProjects/Zombie_vs_Humans/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ivan/CLionProjects/Zombie_vs_Humans /home/ivan/CLionProjects/Zombie_vs_Humans /home/ivan/CLionProjects/Zombie_vs_Humans/cmake-build-debug /home/ivan/CLionProjects/Zombie_vs_Humans/cmake-build-debug /home/ivan/CLionProjects/Zombie_vs_Humans/cmake-build-debug/CMakeFiles/Zombie_vs_Humans.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Zombie_vs_Humans.dir/depend

