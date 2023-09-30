#ifndef COMP_H
#define COMP_H
#include <iostream>
template<typename T> 
class Comp{
    public:
        //Comp();
        //~Comp();

        T sum(T& a, T& b){
            return a+b;
        }

        T compare(T& a, T& b){
            if (a > b)
                return a;
            else
                return b;
            }
};

    template<> std::string Comp<std::string>::compare(std::string& a, std::string& b){

    
    if (a.compare(b) != 0)
    {
        std::cout << "strings are not equal!\n";
        if(a.compare(b) > 0)
        {
            return a;
        }
        else 
        {
            return b;
        }
    }
    else return 0;
        // if (a > b)
        //     return a;
        // else
        //     return b;    
};
#endif