#! /bin/sh
cmake -DGLFW_BUILD_DOCS=OFF -S . -B ./build
cd ./build ; make
cd ./build ; ./AHDENGINE