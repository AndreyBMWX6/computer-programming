cmake_minimum_required(VERSION 3.10)

project(vector)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/include/point)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/include/point3D)

add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)

target_link_libraries(main PUBLIC point)
target_link_libraries(main PUBLIC point3D)

target_include_directories(main PUBLIC
                            ${CMAKE_CURRENT_SOURCE_DIR}/include
                          )
