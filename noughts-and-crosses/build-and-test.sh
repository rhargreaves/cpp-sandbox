#!/bin/sh
set -e

# Compile
cmake -S . -B build
cmake --build build

# Unit Test
ctest --test-dir build
