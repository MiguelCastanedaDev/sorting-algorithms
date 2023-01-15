cmake_minimum_required(VERSION 3.24)
project(sorting_algorithms)

set(CMAKE_CXX_STANDARD 17)

add_executable(sorting_algorithms main.cpp)
set(CMAKE_EXE_LINKER_FLAGS "-static")