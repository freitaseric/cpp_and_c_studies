cmake_minimum_required(VERSION 3.10)

project(CppLearn VERSION 24.11.1)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(calc src/calc.cpp)
add_executable(fact src/fact.cpp)
add_executable(agenda src/agenda.cpp)

set_target_properties(calc PROPERTIES
  CXX_STANDARD 17
  CXX_STANDARD_REQUIRED ON
)
set_target_properties(fact PROPERTIES
  CXX_STANDARD 17
  CXX_STANDARD_REQUIRED ON
)
set_target_properties(agenda PROPERTIES
  CXX_STANDARD 17
  CXX_STANDARD_REQUIRED ON
)

install(TARGETS calc fact agenda DESTINATION bin)