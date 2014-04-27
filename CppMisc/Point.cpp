#include <string>
#include <sstream>    


#include "Point.h"

std::string Point::toString() {
	//std::string s = "(";
	std::stringstream s;
	s << "(" << m_dX << ", " << m_dY << ")";
	return s.str();
}
