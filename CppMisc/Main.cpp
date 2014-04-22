#include <iostream>

#include "Overload.h"

int main()
{
	std::cout << "Swapping:" << std::endl;
	int i = 2, j = 3;
    std::cout << "i=" << i << ", j=" << j << std::endl;
	Overload::swap(i, j);
	std::cout << "i=" << i << ", j=" << j << std::endl;

	double x = 2.1, y = 3.7;
    std::cout << "x=" << x << ", y=" << y << std::endl;
	Overload::swap(x, y);
	std::cout << "x=" << x << ", y=" << y << std::endl;

	system("pause");
    return 0;
}