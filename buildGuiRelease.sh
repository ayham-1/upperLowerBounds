#!/bin/bash
mkdir build
cd build
qmake CONFIG+=release ..
make -j9
cd ..
