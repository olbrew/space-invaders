#! /bin/bash

# compile the game
if  [ ! -d buildRelease ]
then
    mkdir buildRelease
    cd buildRelease
    cmake -DCMAKE_BUILD_TYPE=Release ..
    make
    make install
fi

# run the game
../bin/space_invaders
