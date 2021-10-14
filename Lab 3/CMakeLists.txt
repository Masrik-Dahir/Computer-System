cmake_minimum_required(VERSION 3.20)
project(. C)

set(CMAKE_C_STANDARD 11)

include_directories(..)

add_executable(.
        lab3header.h
        lab3main.c
        lab3support.c)
