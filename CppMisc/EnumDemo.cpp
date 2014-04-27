#include <iostream>

#include "EnumDemo.h"

DayOfWeek::DayOfWeek(day d): thisDay(d){
}

DayOfWeek::~DayOfWeek() {
	// TODO Auto-generated destructor stub
}

const DayOfWeek &DayOfWeek::operator=(const DayOfWeek& right){
	if( &right != this ){ // check for self-assignment
		thisDay = right.thisDay;
	}
	// else do nothing in the case of self-assignment

	return *this; //enables x = y = z;
}

bool DayOfWeek::operator==(const DayOfWeek& right) const{
	if ( thisDay == right.thisDay )
		return true;
	return false;
}

void DayOfWeek::print() const{
	if ( thisDay == SUN )
		std::cout << "Sun"  << std::endl;
	else
		std::cout << "After Sun"  << std::endl;
}
/*
std::ostream& operator<< (std::ostream& out, DayOfWeek &d) { 
	switch (d.thisDay){ 
		case SUN: out << "Sun"; break; 
		case MON: out << "Mon"; break; 
		case TUE: out << "Tue"; break; 
		case WED: out << "Wed"; break; 
		case THU: out << "Thr"; break; 
		case FRI: out << "Fri"; break; 
		case SAT: out << "Sat"; break; 
	} 
	return out; 
}
*/

//int getInt(day d) { return static_cast<int>(d); }

/*
static std::ostream& operator<< (std::ostream& out, days d) { 
	switch (d){ 
		case SUN: out << "Sun"; break; 
		case MON: out << "Mon"; break; 
		case TUE: out << "Tue"; break; 
		case WED: out << "Wed"; break; 
		case THU: out << "Thr"; break; 
		case FRI: out << "Fri"; break; 
		case SAT: out << "Sat"; break; 
	} 
	return out; 
} 

*/