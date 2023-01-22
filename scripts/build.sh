#!/usr/bin/env sh

tree .
mkdir build
cd build && cmake -DCMAKE_BUILD_TYPE=Debug .. && make
