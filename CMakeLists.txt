cmake_minimum_required(VERSION 3.24)
project(C_ex C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_FLAGS "-fexec-charset=CP949")

add_executable(C_ex main.c theory.c condition.c function.c param.c homework.c pointerEx.c char_pointer.c exam2-3.h)
