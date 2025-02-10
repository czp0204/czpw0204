cmake_minimum_required(VERSION 3.10)

project(Hello)

#set Cpp standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQIRED ON)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(Hello src/main.cpp src/Bisearch.cpp src/test_Bisearch.cpp)
#Link necessary libraries (if any)