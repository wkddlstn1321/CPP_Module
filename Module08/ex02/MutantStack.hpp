#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include<iostream>
#include<stack>


template <typename T>
class MutantStack : public std::stack<T>
{
private:

public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack()
	{
	}
	MutantStack(const MutantStack& mutantStack)
	{
		this->c = mutantStack.c;
	}
	MutantStack& operator=(const MutantStack& mutantStack)
	{
		this->c = mutantStack.c;
		return (*this);
	}
	~MutantStack()
	{
	}
	iterator	begin()
	{
		return (this->c.begin());
	}
	iterator	end()
	{
		return (this->c.end());
	}
	iterator	rbegin()
	{
		return (this->c.rbegin());
	}
	iterator	rend()
	{
		return (this->c.rend());
	}
};

#endif