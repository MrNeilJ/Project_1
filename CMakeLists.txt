cmake_minimum_required(VERSION 3.7)
project(project_1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Ant.cpp Ant.hpp cmake-build-debug/Board.cpp cmake-build-debug/Board.hpp)
add_executable(project_1 ${SOURCE_FILES})