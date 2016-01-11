#! /bin/bash

# compile the game
if  [ ! -d buildRelease ]
then
    mkdir buildRelease
    cd buildRelease
    cmake -DCMAKE_BUILD_TYPE=Release ..
    make
    make install
    cd ..
fi

# run the game
cd src/
../bin/space_invaders
