cmake_minimum_required(VERSION 3.15)
project(midterm2)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")
add_executable(midterm2 main.cpp Node.cpp Node.hpp MyLinkedList.cpp MyLinkedList.hpp)