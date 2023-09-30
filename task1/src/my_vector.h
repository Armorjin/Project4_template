#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include <iostream>

template<typename T>
class Vector{
    public:
    int v_size;
    Vector* next;
    Vector* prev;
    vector(){
        this->size = 0;
        this->prev = nullptr;
    }
    vector(int size){
        this->v_size = size;
        this->prev = nullptr;
    }
    T at(){

    }
    T push(){

    }
    T pop(){

    }
    T insert(){
        
    }
};
#endif