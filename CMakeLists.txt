cmake_minimum_required(VERSION 3.30)

project(HolaRaylib5)

set(CMAKE_CXX_STANDARD 20)

add_executable(HolaRaylib5 main.cpp)

add_subdirectory(raylib-5.0)

include_directories(raylib-5.0/src)

target_link_libraries(HolaRaylib5 PRIVATE raylib)