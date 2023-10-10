add_library(point3D point3D.cpp)

target_link_libraries(point3D PUBLIC point)
target_include_directories(point3D PUBLIC ${CMAKE_SOURCE_DIR}/include/point)
