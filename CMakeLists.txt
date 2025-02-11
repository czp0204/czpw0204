cmake_minimum_required(VERSION 3.10)

project(Hello)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/include)

# Detect Windows and set executable name accordingly
if (WIN32)
    set(EXECUTABLE_NAME Hello.exe)  # Windows uses .exe extension
else()
    set(EXECUTABLE_NAME Hello)  # Linux/macOS
endif()

# Define source files
add_executable(${EXECUTABLE_NAME} src/main.cpp src/Bisearch.cpp src/test_Bisearch.cpp)

# Compiler and Debugging settings for Windows
if (WIN32)
    if (MSVC)
        # If using Microsoft Visual C++ compiler
        target_compile_options(${EXECUTABLE_NAME} PRIVATE /W4) # Enable warnings
    else()
        # If using MinGW (GCC on Windows)
        target_compile_options(${EXECUTABLE_NAME} PRIVATE -Wall -Wextra)
    endif()
endif()
