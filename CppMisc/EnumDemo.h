#ifndef ENUMDEMO_H
#define ENUMDEMO_H

#include <iostream>

//typedef 
enum day{SUN, MON, TUE, WED, THU, FRI, SAT};

// pre-increment for day:
inline static day operator++ (day d) { 
	return  static_cast<day>((static_cast<int>(d) + 1) % 7); 
} 

class DayOfWeek {
	//friend std::ostream &operator<<(std::ostream& out, const DayOfWeek& dow) { return dow.toStream(out); }
	friend std::ostream &operator<<(std::ostream& out, DayOfWeek& dow) { return dow.toStream(out); }
public:
	DayOfWeek(day = SUN); // use name of enum rather than the member thisDay
	DayOfWeek(int): thisDay(SUN){}
	virtual ~DayOfWeek();
	const DayOfWeek &operator=(const DayOfWeek&); //assignment operator
	void setDay(day d) { thisDay = d; }
	int daysUntil(day d) { return (static_cast<int>(d) - static_cast<int>(thisDay) + 7) % 7; }
	bool operator==(const DayOfWeek&) const;
	bool operator!=(const DayOfWeek& right) const {return  !(*this == right);}
	DayOfWeek &operator++() { thisDay = ++thisDay; return *this; } // pre-increment
	std::ostream& toStream(std::ostream &out);
protected:
	day thisDay;
};


#endif

