cmake_minimum_required(VERSION 3.8)
project(Merge_two_sorted_lists)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp LinkList.h main.cpp LinkList.cpp)
add_executable(Merge_two_sorted_lists ${SOURCE_FILES} main.cpp)