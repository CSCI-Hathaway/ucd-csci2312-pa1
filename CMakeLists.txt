cmake_minimum_required(VERSION 3.3)
project(ucd_csci2312_hathaway_PA1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    pa1.cpp
    Point.cpp
    Point.h
    README.md)

add_executable(ucd_csci2312_hathaway_PA1 ${SOURCE_FILES})