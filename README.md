TYRIAN
======

Brief
-----
This project implements the arcade game Tyrian in the C++ language with
modern constructs from the c++11 standard.
It hopes to achieve modularity by implementing it in different stand-alone libraries.
For more info on the design reconsiderations see under the Design title.

Install
-------
In Tyrian root directory:

    [rm build]
    mkdir build && cd build
    cmake ..
    make
    make install

You will now have an executable you can run in the bin directory.

Design
------
* Composite design pattern
* Model-View-Controller
* Deque for performant insert and deletes at end of queue
* Smart pointers so we don't have to concern ourselves with manual memory management
    * Unique_ptr instead of shared_ptr because it simplifies code logic and
      improves performance because no reference count has to be kept.
*

//Insert UML schema here.

Author
------
Olivier Brewaeys (s0114375)
