#ifndef ITER_HPP
# define ITER_HPP

#include<iostream>

template<typename T>
void iter(T *a, int b, void(*fp)(T&))
{
	for (int i = 0 ; i < b ; i++)
	{
		fp(a[i]);
	}
}

template<typename T>
void	sumTen(T &a)
{
	a += 10;
}

template<typename T>
void	prin(T &a)
{
	std::cout << a << std::endl;
}

#endif
