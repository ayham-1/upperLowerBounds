#!/bin/bash
mkdir build
cd build
qmake CONFIG+=debug ..
make -j9
cd ..
