#ifndef GENDEMO_H
#define GENDEMO_H

class GenDemo {
public:
	template <class T>
	inline void swap(T& d, T& s)
	{
		T temp = d;
		d = s;
		s = temp;
	}
};

#endif