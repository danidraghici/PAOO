add_subdirectory(Masina)
add_subdirectory(Vehicul)
add_subdirectory(ManagerVehicul)

# Specify the executable and its source files
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
add_executable(MyExecutable main.cpp) 

# Link MasinaLibrary and VehiculLibrary to the executable
target_link_libraries(MyExecutable PUBLIC MasinaLibrary VehiculLibrary ManagerVehiculLibrary)

# Include the header files from MasinaLibrary and VehiculLibrary
target_include_directories(MyExecutable PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Masina)
target_include_directories(MyExecutable PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Vehicul)
target_include_directories(MyExecutable PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/IVehicul)
target_include_directories(MyExecutable PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/ManagerVehicul)