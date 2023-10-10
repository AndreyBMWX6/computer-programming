cmake_minimum_required(VERSION 3.10)

project(student)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(student ${CMAKE_CURRENT_SOURCE_DIR}/include/student.cpp)

add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)

target_link_libraries(main student)

target_include_directories(main PUBLIC
                            ${CMAKE_CURRENT_SOURCE_DIR}/include
                          )
