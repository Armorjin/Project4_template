#include "comp.h"

//cmake -G  "MinGW Makefiles" ../

int main(){

    std::cout << "hello world!!!\n";
    std::string s1 = "wwwhello";
    std::string s2 = "wwwwwworld";
    Comp <double>num1;Comp <int>num2;Comp <char>num3;
    double a=8,b=4;
    int c=8,d=4;
    char e=8, f=4;
    std::cout << num1.sum(a,b) << "\n";
    std::cout << num1.compare(a,b) << "\n";
    std::cout << num2.sum(c,d) << "\n";
    std::cout << num2.compare(c,d) << "\n";
    std::cout << static_cast<double>(num3.sum(e,f)) << std::endl;
    std::cout << static_cast<double>(num3.compare(e,f)) << std::endl;
    std::cout << static_cast<std::string>(num4.sum(s1,s2)) << "\n";
    std::cout << (num4.compare(s1,s2)) << "\n";
    return 0;
}