#include <iostream>
#include <complex>

#include "Overload.h"
#include "GenDemo.h"

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

	std::cout << "Now complex numbers:" << std::endl;

	std::complex <double> c1(4.0, 5.0), c2(3.4, 6.7);
	std::cout << "c1=" << c1 << ", c2=" << c2 << std::endl;
	GenDemo::swap(c1, c2);
	std::cout << "c1=" << c1 << ", c2=" << c2 << std::endl;

	std::cout << "Message added on test branch." << std::endl;

	system("pause");
    return 0;
}