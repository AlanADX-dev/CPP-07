#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T>
void	increment(T &value)
{
	value++;
}

int		main()
{
	// Test with an array of integers
	int array[] = {1, 2, 3, 5, 8};

	std::cout << "Original array: ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;

	::iter(array, 5, increment<int>);

	std::cout << "After incrementing: ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
