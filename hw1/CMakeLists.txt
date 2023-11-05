cmake_minimum_required(VERSION 3.10)

project(MyProject)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)


# Create the build directory (if it doesn't exist) and set it as the build location.
if(NOT EXISTS ${CMAKE_BINARY_DIR}/CMakeFiles)
    file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR})
endif()

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

add_subdirectory(src)




