#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include<iostream>
#include<algorithm>
#include<exception>

class notFound : public std::exception
{
public:
	const char *what() const throw()
	{
		return ("not found exception");
	}
};

template<typename T>
typename T::iterator	easyfind(T a, int n)
{
	typename T::iterator t;

	t = std::find(a.begin(), a.end(), n);
	if (t == a.end())
		throw notFound();
	return (t);
}

#endif