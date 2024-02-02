#include <iostream>
#include <string>

template< typename T>
void	swap(T& x, T& y)
{
	T	temp;

	temp = x;
	x = y;
	y = temp;
}
template< typename T>
T const &	min(T& x, T& y)
{
	if (x < y)
		return x;
	else
		return y;
}

template< typename T>
T const &	max(T& x, T& y)
{
	if (x > y)
		return x;
	else
		return y;
}
