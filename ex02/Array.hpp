#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstddef>

template<typename T>
class Array {

	private:
		T*		elements;
		int		size;
	protected:

	public:
		/*Construction with no parameter: Creates an empty array*/
		Array() : elements(nullptr), size(0) {}

		/*Construction with an unsigned int n as a parameter: Creates an array of n elements
		initialized by default.*/
		Array(int n) : elements(new T[n]), size(n) {
			for(int i = 0; i < size; ++i)
				elements[i] = T();
		}

		/*Construction by copy and assignment operator. In both cases, modifying either the
		original array or its copy after copying musn’t affect the other array.*/
		Array(const Array& other) : elements(new T[other.size]), size(other.size) {
			for (int i = 0; i < size; ++i)
				elements[i] = other.elements[i];
		}

		~Array() {
			delete[] elements;
		}

		Array& operator=(const Array& other) {
			if (this != &other)
			{
				delete[] elements;
				elements = new T[other.size];
				size = other.size;
				for (int i = 0; i < size; ++i)
					elements[i] = other.elements[i];
			}
			return *this;
		}

		/*When accessing an element with the [ ] operator, if its index is out of bounds, an
		std::exception is thrown.*/
		T& operator[](int index) {
			if (index >= size) {
				throw std::out_of_range("Index out of bounds");
			}
			return elements[index];
		}

		/*A member function size() that returns the number of elements in the array. This
		member function takes no parameter and musn’t modify the current instance*/
		int		size() {
			return size;
		}
};

#endif
