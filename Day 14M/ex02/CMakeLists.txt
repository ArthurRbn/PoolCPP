cmake_minimum_required(VERSION 3.17)
project(B_CPP_300_STG_3_1_CPPD14M_arthur_robine)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ex02
        Fruit.cpp
        Fruit.hpp
        Lemon.cpp
        Lemon.hpp
        Banana.cpp
        Banana.hpp
        FruitBox.cpp
        FruitBox.hpp
        FruitNode.hpp main.cpp LittleHand.cpp LittleHand.hpp Lime.cpp Lime.hpp Coconut.cpp Coconut.hpp)
