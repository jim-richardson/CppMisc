#include <iostream>
#include <complex>

#include "Overload.h"
#include "GenDemo.h"
#include "EnumDemo.h"
#include "Point.h"

static void swapDemo() {
	std::cout << "Swapping:" << std::endl;
	int i = 44, j = -8;
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
}

static void genericFunctionsDemo() {
	std::cout << "Sum some arrays that sum to 9:" << std::endl;
	int iArray[] = {1, 10, -2}, ia2[] = {2};
	double dArray[] = {-1.2, 5.2, 5.0};
	std::cout << "Sum of iArray = " << GenDemo::sum(iArray, 3) << std::endl;
	std::cout << "Sum of dArray = " << GenDemo::sum(dArray, 3) << std::endl;
	std::cout << "This should be close to zero: " 
		<< GenDemo::sum( dArray, 3, static_cast<double>(- GenDemo::sum(iArray, 3)) ) << std::endl;

	std::cout << "iArray=";
	GenDemo::show(iArray, 3);
	std::cout << "ia2=";
	GenDemo::show(ia2, 1);
	std::cout << "dArray=";
	GenDemo::show(dArray, 3);

	std::cout << "Cast and copy double array into int array and show result:" << std::endl;
	std::cout << "iArray=";
	GenDemo::copy(dArray, iArray, 3);
	GenDemo::show(iArray, 3);
}

static void pointDemo() {
	std::cout << "Origin:" << std::endl;
	Point orig, p11(1,1);
	std::cout << "orig.x=" << orig.GetX() << ", orig.y=" << orig.GetY() << std::endl;
	std::cout << orig << std::endl;
	std::cout << p11 << std::endl;
}

static void enumDemo() {
	std::cout << "testing DayOfWeek:" << std::endl;
	DayOfWeek d0, d1(WED);
	std::cout << "d0 = " << d0 << std::endl;
	std::cout << "d1 = " << d1 << std::endl;
	std::cout << "Days from " << d0 << " unitl " << d1 << " = " << d0.daysUntil(d1) << std::endl;
	std::cout << "now let d0 count up from Thursday until it is equal to d1:" << std::endl;
	d0.setDay(THU);
	while (d0 != d1) {
		std::cout << "d0 = " << ++d0 << std::endl;
	}
}

int main()
{
	//swapDemo();
	//genericFunctionsDemo();
	//pointDemo();
	enumDemo();

	system("pause");
    return 0;
}