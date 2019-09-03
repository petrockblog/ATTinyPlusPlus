cmake_minimum_required(VERSION 2.8)

add_subdirectory(src)

include(${CMAKE_ROOT}/Modules/ExternalProject.cmake)

ExternalProject_Add(UnitTests
    SOURCE_DIR ../test
        )