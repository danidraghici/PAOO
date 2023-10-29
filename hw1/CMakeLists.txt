cmake_minimum_required(VERSION 3.10)

project(MyProject)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)

# Set the source directory
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)

# Set the binary directory
set(BIN_DIR ${CMAKE_SOURCE_DIR}/build)

# Add the source files to the project
file(GLOB SOURCES ${SRC_DIR}/*.cpp)

# Specify the executable and its source files
add_executable(MyExecutable ${SOURCES})

# Set the output directory for the executable
set_target_properties(MyExecutable PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${BIN_DIR}
)
