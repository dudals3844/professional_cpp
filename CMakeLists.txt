cmake_minimum_required(VERSION 3.23)
project(professional_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(professional_cpp)

add_executable(professional_cpp
        professional_cpp/main.cpp professional_cpp/Adder.cpp professional_cpp/Adder.h professional_cpp/Calculator.cpp professional_cpp/Calculator.h)
