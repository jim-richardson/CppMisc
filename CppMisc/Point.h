//#pragma once

#ifndef	POINT_H
#define POINT_H

#include <iostream>
#include <string> // for std::string

class Point {
	friend std::ostream& operator<< (std::ostream &out, Point &cPoint) { out << cPoint.toString(); return out; }
private:
    double m_dX, m_dY;

public:
    Point(double dX=0.0, double dY=0.0) {
		m_dX = dX;
		m_dY = dY;
    }

    inline double GetX() { return m_dX; }
    inline double GetY() { return m_dY; }
	std::string toString();
};

#endif