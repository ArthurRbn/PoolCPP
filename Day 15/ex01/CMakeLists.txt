cmake_minimum_required(VERSION 3.17)
project(B_CPP_300_STG_3_1_CPPD15_arthur_robine)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ex01
        ex01.hpp
        main.cpp main.cpp main.hpp ../ex02/ex02.hpp ../ex02/main.cpp)
