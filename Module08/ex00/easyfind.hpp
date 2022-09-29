#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include<iostream>
#include<algorithm>
#include<exception>

template<typename T>
T*	easyfind(T *a, int n)
{
	T	*findIdx;

	findIdx = std::find(a.begin(), a.last(), int n);
	if (findIdx == a.last())
		throw notFound();
	return (findIdx);
}

class notFound : public std::exception
{
public:
	const char *what() const throw()
	{
		return ("not found exception");
	}
};

#endif