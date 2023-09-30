#ifndef WAGON_H
#define WAGON_H

#include <string>

class Wagon{
    private:
        int id;
        std::string cargoType; 
    public:
        Wagon* nextWagon;
        Wagon();
        Wagon(std::string cargoType, int Id);
        Wagon* getNext();
        void setNext(Wagon* nextWagon);
        std::string getCargoType();
        int getId();
        void setCargoType(std::string cargoType);
        void setCargoIndex(int id);
};

Wagon::Wagon(){

}

Wagon::Wagon(std::string cargoType, int Id){
    this->id = Id;
    this->cargoType = cargoType;
    this->nextWagon = NULL;
}

Wagon* Wagon::getNext(){
    if (getId() == NULL)
    {
        return nullptr;//place holder
    }
    else
        return this->nextWagon;
    
}

void Wagon::setNext(Wagon* nextWagonP){
    this->nextWagon = nextWagonP;
}

std::string Wagon::getCargoType(){
    return this->cargoType;
}

int Wagon::getId(){
    return this->id;
}

void Wagon::setCargoType(std::string str)
{
    this->cargoType = str;
}

void Wagon::setCargoIndex(int const in)
{
    this->id = in;
}
#endif