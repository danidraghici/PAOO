cmake_minimum_required(VERSION 3.10)


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)


# Set the source directory
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src) # setam folderul sursa 

# Add the source files to the project
file(GLOB SOURCES ${SRC_DIR}/*.cpp) # identifica toate fisierele sursa pentru a le compila 

# Specify the executable and its source files
add_executable(MyExecutable ${SOURCES}) 