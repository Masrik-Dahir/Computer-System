cmake_minimum_required(VERSION 3.20)
project(Lab_10 C)

set(CMAKE_C_STANDARD 99)

add_executable(Lab_10 csapp.c csapp.h hellobug.c race.c semaphore.c)