cmake_minimum_required(VERSION 3.17)
project(avionic-software)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(orchestration)
add_subdirectory(service)
add_subdirectory(application)
add_subdirectory(libs)
add_subdirectory(test)
