cmake_minimum_required(VERSION 3.27)
project(BiblitekaJIPP)

set(CMAKE_CXX_STANDARD 23)

add_executable(BiblitekaJIPP main.cpp
        Book.cpp
        Book.h
        Member.cpp
        Member.h
        Library.cpp
        Library.h)
