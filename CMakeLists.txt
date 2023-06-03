cmake_minimum_required(VERSION 3.25)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled merge/merge.cpp stack.h quick/quick.cpp radix/radix.cpp)
