#!/bin/bash
mkdir build
cd build
cmake -DCMAKE_TOOLCHAIN_FILE=CMake/Toolchain-mingw64.cmake ..
make -j9
cd ..
