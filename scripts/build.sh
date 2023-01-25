#!/usr/bin/env sh

tree . -I \
bin \
build \
include \
lib

mkdir build
cd build
cmake -DCMAKE_C_FLAGS=-Ofast ..
make
