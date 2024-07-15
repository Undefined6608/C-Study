cmake_minimum_required(VERSION 3.28)
project(Study)

set(CMAKE_CXX_STANDARD 17)

add_executable(Study main.cpp
        src/1_HelloWorld.cpp
        src/2_注释.cpp
        Study.hpp
        src/3_变量.cpp
        src/4_常量.cpp
        src/5_关键字.cpp
        src/6_标识符命名规则.cpp
        src/7_数据类型.cpp
        src/8_数据的输入.cpp
        src/9_运算符.cpp
        src/10_指针.cpp
        src/11_结构体.cpp
)

