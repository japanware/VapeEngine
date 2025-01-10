cmake_minimum_required(VERSION 3.30)
project(VapeEngine)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

# Check the build type and define a macro accordingly
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_definitions(-DDEBUG_BUILD)
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    add_definitions(-DRELEASE_BUILD)
endif()

add_executable(VapeEngine src/main.cpp
        src/Engine.cpp
        src/Engine.h
        src/Game/Game.cpp
        src/Game/Game.h
        src/Core/AssetManager.cpp
        src/Core/AssetManager.h
        src/Core/Scene.cpp
        src/Core/Scene.h
        src/Core/SceneManager.cpp
        src/Core/SceneManager.h
        src/Core/Renderer.cpp
        src/Core/Renderer.h
)

find_package(raylib CONFIG REQUIRED)
target_link_libraries(VapeEngine PRIVATE raylib)
