cmake_minimum_required(VERSION 3.10)

project(hspkg)

set(CMAKE_BUILD_TYPE Debug)

add_executable(hspkg main.cpp)

target_compile_features(hspkg PRIVATE cxx_std_17)