add_library(VehiculLibrary vehicul.cpp)

target_include_directories(VehiculLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../IVehicul)
target_include_directories(VehiculLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../Vehicul)
