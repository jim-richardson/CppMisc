#include <iostream>
#include <string>
#include <sstream>    


#include "Point.h"

std::string Point::toString() {
	std::stringstream s;
	s << "(" << m_dX << ", " << m_dY << ")";
	return s.str();
}

std::ostream& Point::toStream(std::ostream &out) {
	out << "(" << m_dX << ", " << m_dY << ")";
	return out;
}
