#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstddef>
#include <cstdlib>

template<typename T>
class Array {

	private:
		T*		elements;
		int		m_size;
	protected:

	public:
		Array() : elements(NULL), m_size(0) {}

		Array(int n) : elements(new T[n]), m_size(n) {
			for(int i = 0; i < m_size; ++i)
				elements[i] = T();
		}

		Array(const Array& other) : elements(new T[other.m_size]), m_size(other.m_size) {
			for (int i = 0; i < m_size; ++i)
				elements[i] = other.elements[i];
		}

		~Array() {
			delete[] elements;
		}

		Array& operator=(const Array& other) {
			if (this != &other)
			{
				delete[] elements;
				elements = new T[other.m_size];
				m_size = other.m_size;
				for (int i = 0; i < m_size; ++i)
					elements[i] = other.elements[i];
			}
			return *this;
		}

		T& operator[](int index) {
			if (index >= m_size) {
				throw std::out_of_range("Index out of bounds");
			}
			return elements[index];
		}

		int		size() {
			return m_size;
		}
};

#endif
