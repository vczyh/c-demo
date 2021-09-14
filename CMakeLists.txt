cmake_minimum_required(VERSION 3.19)
project(c_demo C)

set(CMAKE_C_STANDARD 99)

add_executable(c_demo main.c)
add_executable(io_file io/file.c)