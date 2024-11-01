cmake_minimum_required(VERSION 3.10)

project(CppLearn VERSION 24.11.1)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDAD_REQUIRED True)

add_executable(calc src/calc.cpp)
add_executable(fact src/fact.cpp)
add_executable(agenda src/agenda.cpp)
