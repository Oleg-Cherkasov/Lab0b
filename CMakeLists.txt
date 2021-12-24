cmake_minimum_required(VERSION 3.20)
project(test)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(googletest-main)

include_directories(googletest-main/googletest/include)
add_executable(test main.cpp counter.cpp counter.h printer.cpp printer.h cmake-build-debug/фва.cpp)
target_link_libraries(test gtest)