cmake_minimum_required(VERSION 3.10)

project(cse-tut VERSION 0.1)

set(SOURCE_LIB src/)
include_directories(include)

file(GLOB SOURCES "src/*.cpp")
add_executable(cse-tut ${SOURCES})

