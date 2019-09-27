cmake_minimum_required(VERSION 3.5)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

message("${CMAKE_CXX_COMPILER_ID}")

# Set c++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Set c++ compiler options
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -Wall -Werror")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3 -Wall -Werror")

# Set build type definitions.
if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_definitions(-D__DEBUG__)
endif (CMAKE_BUILD_TYPE STREQUAL "Debug")
if (CMAKE_BUILD_TYPE STREQUAL "Release")
    add_definitions(-D__RELEASE__)
endif (CMAKE_BUILD_TYPE STREQUAL "Release")

# upperlowerBounds
project("upperlowerBounds")

file (GLOB_RECURSE uplowbounds_hdrs "src/*.h src/*.hpp")
file (GLOB_RECURSE uplowbounds_srcs "src/*.cpp")

include_directories("src/")

add_executable(uplowbounds ${uplowbounds_hdrs} ${uplowbounds_srcs})

# Test Cases

# Circle Test.
add_executable(
    circletest 
    src/vendor/catch.hpp
    src/methods/circle/circle.h
    ../src/methods/circle/area.cpp
    ../src/methods/circle/perimeter.cpp
    tests/CircleTest.cpp
)

# Equ-Triangle Test.
add_executable(
    equTriantest 
    src/vendor/catch.hpp
    src/methods/equ_triangle/equ_triangle.h
    ../src/methods/equ_triangle/area.cpp
    ../src/methods/equ_triangle/perimeter.cpp
    ../src/methods/equ_triangle/height.cpp
    tests/EquTriangleTests.cpp
)

# Parellelogram Test.
add_executable(
    parallelTest 
    src/vendor/catch.hpp
    src/methods/parallelogram/parallelogram.h
    ../src/methods/parallelogram/area.cpp
    ../src/methods/parallelogram/perimeter.cpp
    tests/ParallelogramTest.cpp
)

