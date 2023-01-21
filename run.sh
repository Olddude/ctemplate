#!/usr/bin/env sh

rm -rf build bin
tree .
mkdir build
cd build && cmake .. && make
cd ..
./bin/ctemplate-cli data.csv

