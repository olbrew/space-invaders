TYRIAN
======

Todo
----
<!-- Remove this when delivering project. -->
In order of importance/ urgency:

1. Let entities move on window
2. Spaceships create bullets / shooting
3. Collision control
4. Check documentation
5. Check for public functions which could be private

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
* One game object, controls the model and so the view syncs with the model.
    * Game has pointer to world object with all its entities. Manipulates it
      through time and player input (Stopwatch and Keyboard classes.)
    * The view (Window class) also has a pointer to the world and updates itself
    (the SFML output) whenever the model changes.
* Try to limit memory consumption through extensive use of pointers and
  references.
    * Always pass user-defined and STL types by reference if possible.
    * If not possible use smart pointers.
        * Smart pointers -> Effectively eliminate whole family of memory-related bugs
        at no (`unique_ptr`) or minimal (`shared_ptr`) effect on perfomance.
        * Tried to use unique_ptr's where applicable, but `make_unique` is only
        present in C++14 and apparently cmake doesn't support C++14 yet, so
        I left it out.
* Deque for performant insert and deletes at end of queue
* In view library, textures are loaded through textureloader class when their
  corresponding objects are first made and then popped onto a textures stack
  member, because they have to exist as long as their corresponding sprites
  exist.

#Insert UML schema here.

Author
------
Olivier Brewaeys (s0114375)
