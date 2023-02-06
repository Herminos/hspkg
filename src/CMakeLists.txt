cmake_minimum_required(VERSION 3.10)

project(hspkg)

set(CMAKE_BUILD_TYPE Debug)

add_executable(hspkg main.cpp description.cpp generate.cpp info.cpp)

target_compile_features(hspkg PRIVATE cxx_std_17)

#cmake_minimum_required(VERSION 3.18)

#project(test)

#set(CMAKE_CXX_STANDARD 14)

#set(OpenCV_DIR C:/opencv/build/x64/vc16/lib)

#find_package(OpenCV REQUIRED)

#include_directories(C:/opencv/build/include)

#link_directories(C:/opencv/build/x64/vc16/lib)

#add_executable(main main.cpp)

#target_link_libraries(main ${OpenCV_LIBS})