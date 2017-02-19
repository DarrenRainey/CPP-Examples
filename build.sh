#!/bin/bash
# C examples by DarrenRainey http://github.com/DarrenRainey
mkdir build
echo Building Hello World example
gcc hello-world.cpp -o build/hello-world
echo Building File Creation example
gcc create-a-file.cpp -o build/create-a-file
echo ""
echo Build Complete all builds saved to $PWD/build
