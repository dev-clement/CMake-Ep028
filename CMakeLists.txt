cmake_minimum_required(VERSION 3.25)

project(Dependencies)

# Project setup for path and C++ version
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Including CMakePackageManage present in the cmake folder of the project
include(CPM)

# Bring the Catch2 testing library from github
CPMAddPackage("gh:catchorg/Catch2#v3.4.0")

# Bring the fmt library
CPMAddPackage("gh:fmtlib/fmt#10.1.1")

# Bring in the SFML library
option(BUILD_SHARED_LIBS "Build Shared libraries" OFF)
CPMAddPackage("gh:SFML/SFML#2.6.1")

add_subdirectory(calculator)

add_executable(rooster main.cpp)
target_link_libraries(rooster PRIVATE run_app)

add_executable(gui gui.cpp)
target_link_libraries(gui PRIVATE sfml-graphics)

add_executable(use_fmt use_fmt.cpp)
target_link_libraries(use_fmt PRIVATE fmt)

add_subdirectory(test)

add_subdirectory(doc)