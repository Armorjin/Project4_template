cmake_minimum_required(VERSION 3.5.0)
project(task2)

set(SOURCES
       
    ./src/comp.h
    ./src/comp.cpp

    )

include_directories(
    ./src/
    )
add_executable(task2 ./main.cpp ${SOURCES})