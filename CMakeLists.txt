cmake_minimum_required(VERSION 3.30)
project(VapeEngine)

set(CMAKE_CXX_STANDARD 20)

add_executable(VapeEngine src/main.cpp
        src/Engine.cpp
        src/Engine.h
        src/Game/Game.cpp
        src/Game/Game.h
        src/Core/AssetManager.cpp
        src/Core/AssetManager.h)

find_package(raylib CONFIG REQUIRED)
target_link_libraries(VapeEngine PRIVATE raylib)
