cmake_minimum_required(VERSION 3.20)
project(noughts-and-crosses)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# main code
add_library(noughts_and_crosses_lib
    src/board.cpp
    src/cell.cpp
)
target_include_directories(noughts_and_crosses_lib PUBLIC include)
add_executable(noughts-and-crosses src/main.cpp)
target_include_directories(noughts-and-crosses PRIVATE noughts_and_crosses_lib)

# unit tests
include(FetchContent)
cmake_policy(SET CMP0135 NEW)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/52eb8108c5bdec04579160ae17225d66034bd723.zip # v1.17
)
FetchContent_MakeAvailable(googletest)
enable_testing()
add_subdirectory(tests)
