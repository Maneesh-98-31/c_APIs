cmake_minimum_required(VERSION 3.25)
project(untitled C)

set(CMAKE_C_STANDARD 17)

add_executable(untitled main.c dynamic/darray.c dynamic/darray.h dynamic/hash_set.h dynamic/hash_set.c)
