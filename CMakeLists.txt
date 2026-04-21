cmake_minimum_required(VERSION 4.2)
project(C)

set(CMAKE_CXX_STANDARD 20)

add_executable(main main.cpp)
add_executable(bt1 BT1/bt1.cpp
        BT4/BT4.1.cpp
        BT5/BT5.1.cpp
        BT5/BT5_2.cpp
        BT6/BT6_1.cpp
        BT7/BT7_1.cpp
        BT7/BT7_2.cpp
        BT8/BT8_1.cpp)
add_executable(bt2.1 BT2/bt2.1.cpp)
add_executable(bt2.2_2.3_2.4 BT2/bt2.2_2.3_2.4.cpp)
add_executable(bt2.5_2.6_2.7 BT2/bt2.5_2.6_2.7.cpp)
add_executable(bt3.1 BT3/bt3.1.cpp)
