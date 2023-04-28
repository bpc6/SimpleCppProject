cmake_minimum_required(VERSION 3.0)
project(MySimpleProject)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the src folder to the include directories
include_directories(src)

# Set the output directory for the executables to build/bin
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Add src and test directories
add_subdirectory(src)
add_subdirectory(test)
