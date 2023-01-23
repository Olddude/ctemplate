#!/usr/bin/env sh

tree .
mkdir build
cd build && cmake .. && make
