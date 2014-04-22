#include <iostream>

void swap(int& i, int& j){ 
	int temp = i; 
	i = j; 
	j = temp; 
}

void swap(double& i, double& j){ 
	double temp = i; 
	i = j; 
	j = temp; 
}

int main()
{
	std::cout << "Swapping:" << std::endl;
	int i = 2, j = 3;
    std::cout << "i=" << i << ", j=" << j << std::endl;
	swap(i, j);
	std::cout << "i=" << i << ", j=" << j << std::endl;

	double x = 2.1, y = 3.7;
    std::cout << "x=" << x << ", y=" << y << std::endl;
	swap(x, y);
	std::cout << "x=" << x << ", y=" << y << std::endl;

	system("pause");
    return 0;
}