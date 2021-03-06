# Executable name
SET(EXECUTABLE_NAME space_invaders)

# The source files to compile
SET(SRC
    main.cpp
    )

# Add additional src subdirectories
ADD_SUBDIRECTORY(model)
ADD_SUBDIRECTORY(view)
ADD_SUBDIRECTORY(controller)
ADD_SUBDIRECTORY(util)

# CMake & SFML
SET(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake_modules/")
FIND_PACKAGE(SFML 2 COMPONENTS system window graphics)
INCLUDE_DIRECTORIES(${SFML_INCLUDE_DIR})

# Program Executable
ADD_EXECUTABLE(${EXECUTABLE_NAME}  ${SRC})

# Link Libraries
SET(PROJECT_LIBRARIES model view controller util)
TARGET_LINK_LIBRARIES(${EXECUTABLE_NAME} ${SFML_LIBRARIES} ${PROJECT_LIBRARIES})

# Install
INSTALL(TARGETS ${EXECUTABLE_NAME} DESTINATION ${PROJECT_SOURCE_DIR}/bin)
