#ifndef SPAN_HPP
# define SPAN_HPP

#include<iostream>
#include<vector>
#include<algorithm>

class Span
{
private:
	std::vector<int> v;
	unsigned int size;
	Span();

public:
	Span(unsigned int N);
	Span(const Span& span);
	Span& operator=(const Span& span);
	~Span();
	void addNumber(int n);
	int	shortestSpan();
	int	longestSpan();
	int	getSize();
	class SizeOut : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("size is max");
		}
	};
	class FewElements : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("elements is few");
		}
	};
};


#endif