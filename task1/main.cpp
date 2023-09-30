#include <fstream>
#include "my_vector.h"

int main()
{
    Vector <int>nv;
    Vector <double>dv(3);
	dv.resize(5);
    dv.push_back(2.112);
	for(int i = 0; i < dv.size(); ++i) {
		std::cout << dv[i] << " " ;      //0 0 0 0 0
	}

    return 0;
}
