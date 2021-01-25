cmake_minimum_required(VERSION 3.17)
project(B_CPP_300_STG_3_1_CPPD07M_arthur_robine)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(B_CPP_300_STG_3_1_CPPD07M_arthur_robine
        Borg.cpp
        Borg.hpp
        Destination.hpp
        Federation.cpp
        Federation.hpp
        WarpSystem.cpp
        WarpSystem.hpp)
