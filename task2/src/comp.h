#ifndef COMP_H
#define COMP_H
#include <iostream>
template<typename T> class Comp{
    public:
        //Comp();
        // ~Comp();

        template<typename T> T sum(T& a, T& b){
            return a+b;
        }

        template<typename T> T compare(T& a, T& b){
            if (a > b)
            {
                return a;
            }else{
                return b;
            }
        };

};
    template<typename T> bool compare(std::string& a, std::string& b){
        if (a > b)
        {
            return true;
        }else{
            return false;
            }
};
#endif