#!/usr/bin/env bash

mkdir -p build
javac -d build port/java/JarvisMarch.java
javah -jni -verbose -classpath ./build -d include/java/ com.goforbroke1006.algorithm.JarvisMarch

mkdir -p cmake-build-debug && cd cmake-build-debug
cmake ..
make
ctest .
sudo make install
sudo ldconfig
cd -

