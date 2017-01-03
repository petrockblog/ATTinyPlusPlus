!#/bin/bash

mkdir -p build
pushd build
cmake -DCMAKE_TOOLCHAIN_FILE=../generic-gcc-avr.cmake ..
make
popd
