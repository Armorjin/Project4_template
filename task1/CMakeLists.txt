cmake_minimum_required(VERSION 3.5.0)

set(SOURCES

    ./src/my_vector.h
    #./src/train.h
    #./src/wagon.h
    
    )

include_directories(
    ./src/
    )
add_executable(task1 ./main.cpp ${SOURCES})
