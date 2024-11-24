cmake_minimum_required(VERSION 3.30.3)

# Set project name variable
set(projectName AngelFlop)

# Set the project name
project(${projectName} LANGUAGES CXX)

# Set the C++ standart 
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Fetch the raylib library
include(FetchContent)

FetchContent_Declare(
    raylib
    GIT_REPOSITORY https://github.com/raysan5/raylib
    GIT_TAG 5.0
)

FetchContent_MakeAvailable(raylib)

# Add subdirectories
add_subdirectory(src)