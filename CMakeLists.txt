cmake_minimum_required(VERSION 3.30)
project(VapeEngine)

set(CMAKE_CXX_STANDARD 20)

add_executable(VapeEngine main.cpp)

find_package(raylib CONFIG REQUIRED)
target_link_libraries(VapeEngine PRIVATE raylib)
