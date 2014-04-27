//#pragma once

#ifndef ENUMDEMO_H
#define ENUMDEMO_H

#include <iostream>

//typedef 
enum day{SUN, MON, TUE, WED, THU, FRI, SAT};

inline static day operator++ (day d) { 
	return  static_cast<day>((static_cast<int>(d) + 1) % 7); 
} 
//static int getInt(day d);

class DayOfWeek {
	//friend std::ostream &operator<<(std::ostream&, const DayOfWeek&);
public:
	DayOfWeek(day = SUN); // use name of enum rather than the member thisDay
	DayOfWeek(int): thisDay(SUN){}
	virtual ~DayOfWeek();
	const DayOfWeek &operator=(const DayOfWeek&); //assignment operator
	bool operator==(const DayOfWeek&) const;
	bool operator!=(const DayOfWeek& right) const {return  !(*this == right);}
	virtual void print() const;
protected:
	day thisDay;
};


#endif

