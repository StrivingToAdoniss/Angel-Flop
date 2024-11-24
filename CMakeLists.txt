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

add_custom_target(CopyAssets ALL
    COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/assets ${CMAKE_BINARY_DIR}/assets
    COMMENT "Copying assets folder to build directory"
)

# Ensure the CopyAssets target runs before building the project
add_dependencies(${projectName} CopyAssets)