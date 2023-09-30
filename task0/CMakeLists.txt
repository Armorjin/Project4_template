cmake_minimum_required(VERSION 3.5.0)
project(task0)

set(SOURCES
       
    ./src/my_calc.h
    ./src/my_calc.cpp
    ./src/temp_calc.h

    )

include_directories(
    ./src/
    )
add_executable(task0 ./main.cpp ${SOURCES})