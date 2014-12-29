# Install script for directory: /Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/bin/Tyrian")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/bin" TYPE EXECUTABLE FILES "/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/build/src/Tyrian")
  if(EXISTS "$ENV{DESTDIR}/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/bin/Tyrian" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/bin/Tyrian")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/bin/Tyrian")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/build/src/model/cmake_install.cmake")
  include("/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/build/src/view/cmake_install.cmake")
  include("/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/build/src/controller/cmake_install.cmake")
  include("/Users/exatto/Documents/Edu/INF/S5/Gevorderd Programmeren/exercises/tyrian/build/src/util/cmake_install.cmake")

endif()

