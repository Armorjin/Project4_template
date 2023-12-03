#include "my_vector.h"

int main()
{
    Vector <int>iv;
    Vector <double>dv(3);
    Vector <char>cv;
    std::cout << "Double vector:\n";
    dv.print();
	dv.resize(5);
    dv.print();
    dv.push_back(2.112);
    dv.at(3,2.28);
	dv.print();
    dv.pop_back();
    dv.print();
    dv.push_back(3.14);
    dv.print();
    dv.resize(1);
    dv.print();
    dv.pop_back();
    dv.pop_back();
    dv.print();
    std::cout << "Int vector:\n";
    iv.print();
	iv.resize(3);
    iv.print();
    iv.push_back(2);
	iv.print();
    iv.pop_back();
    iv.print();
    iv.push_back(3.14);
    iv.print();
    std::cout<< iv[3] << "\n";
    iv.resize(1);
    iv.print();
    iv.pop_back();
    iv.pop_back();
    iv.print();
    std::cout << "Char vector:\n";
    cv.print();
	cv.resize(3);
    cv.print();
    cv.push_back(2);
	cv.print();
    cv.pop_back();
    cv.print();
    cv.push_back(3.14);
    cv.print();
    cv.resize(1);
    cv.print();
    cv.pop_back();
    cv.pop_back();
    cv.print();
    return 0;
}
