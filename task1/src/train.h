#ifndef TRAIN_H
#define TRAIN_H

#include "wagon.h"
#include <iostream>

class Train:public Wagon{
    private:
        Wagon* next;
        Wagon* prev;
        int size;    
    public:
        Train();
        Train(int size);
        Wagon* at(int i = 0); 
        void pop();
        void push(Wagon* wagonP);
        int getSize();
};

Train::Train(){
    this->size=0;
    this->prev=nullptr;
}

Train::Train(int size){
    this->size=size;
    this->prev=nullptr;
}


Wagon* Train::at(int i){
    if (i >= this->size) return nullptr;
    Wagon* ans = this->first;
    while(i > 0)
    {
        if (ans->nextWagon == nullptr) return nullptr;
        ans = ans->nextWagon;
        i--;
    }
    return ans;
}

void Train::pop(){

    if(this->size != 0)
    {
        this->next = this->next->getNext();
        this->size--;
    }
    else
    {
        this->first = nullptr;
        this->size = 0;
    }
}

void Train::push(Wagon* wagonP){
    if(size == 0){
        this->next = wagonP;
        this->size++;
    }
    else
    {
        wagonP->setNext(this->prev);
        this->next = wagonP;
        this->size++;
    }
}

int Train::getSize(){
    return this->size;
}

#endif