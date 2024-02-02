#include <iostream>
#include <string>

template< typename T>
void	iter(T *tab, int len, void (*f)(T &))
{
	for (int i = 0; i < len; i++)
		f(tab[i]);
}
