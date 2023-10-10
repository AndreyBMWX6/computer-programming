cmake_minimum_required(VERSION 3.10)

project(vector)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(vector ${CMAKE_CURRENT_SOURCE_DIR}/include/vector.cpp)

add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)

target_link_libraries(main vector)

target_include_directories(main PUBLIC
                            ${CMAKE_CURRENT_SOURCE_DIR}/include
                          )
