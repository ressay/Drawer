cmake_minimum_required(VERSION 3.8)
project(Project)

set(CMAKE_CXX_STANDARD 11)

find_package( OpenCV REQUIRED )
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Test REQUIRED)

set(SOURCE_FILES main.cpp main.moc Useful/BasicMethods.h Useful/BasicMethods.cpp Useful/Displayer.cpp Useful/Displayer.h DetectingMethods/DetectionPolicy.cpp DetectingMethods/DetectionPolicy.h testqt.cpp testqt.h qrc_testqt.cpp ui_testqt.h Useful/KeyHandler.cpp Useful/KeyHandler.h Drawing/Drawer.cpp Drawing/Drawer.h Drawing/DrawManager.cpp Drawing/DrawManager.h)


include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(${Qt5Widgets_INCLUDE_DIRS})

set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)
# Add compiler flags for building executables (-fPIE)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${Qt5Widgets_EXECUTABLE_COMPILE_FLAGS}")
qt5_generate_moc(main.cpp main.moc)

add_executable(Project ${SOURCE_FILES})

target_link_libraries( Project ${OpenCV_LIBS} )
target_link_libraries( Project Qt5::Widgets Qt5::Test)