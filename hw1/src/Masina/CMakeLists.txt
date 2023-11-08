add_library(MasinaLibrary masini.cpp)

target_include_directories(MasinaLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../Masina)
target_include_directories(MasinaLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../Vehicul)
target_include_directories(MasinaLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../IVehicul)