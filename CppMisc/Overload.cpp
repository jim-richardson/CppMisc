#include <iostream>

#include "Overload.h"

void Overload::swap(int& i, int& j){
	int temp = i;
	i = j;
	j = temp;
}

void Overload::swap(double& i, double& j){
	double temp = i;
	i = j;
	j = temp;
}
