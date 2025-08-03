cmake_minimum_required(VERSION 3.20)
project(noughts-and-crosses)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(noughts-and-crosses src/main.cpp)
target_include_directories(noughts-and-crosses PRIVATE include)
