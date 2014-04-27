#ifndef GENDEMO_H
#define GENDEMO_H

class GenDemo {
public:
	// swap two items of type T
	template <class T> //T is generic type
	static inline void swap(T& d, T& s) {
		T temp = d;
		d = s;
		s = temp;
	}

	// sum an array of type T
	template <class T>  
	static T sum(const T data[], int size, T s=0) { 
		for(int i = 0; i < size; ++i) 
			s += data[i]; //+= must work for T 
		return s; 
	}

	// display an array of type T
	template <class T>  
	static void show(const T data[], int size) { 
		std::cout << "{" << data[0];
		for(int i = 1; i < size; ++i) 
			std::cout << ", " << data[i];
		std::cout << "}" << std::endl;
	}

	// copy array of type T1 into array of T2, with appropriate cast
	template<class T1, class T2> 
	static void copy(const T1 source[], T2 destination[], int size)  { 
		for(int i = 0; i < size; ++i) 
			destination[i] = static_cast<T2>(source[i]); 
	}


};

#endif