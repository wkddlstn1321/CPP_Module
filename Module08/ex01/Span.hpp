#ifndef SPAN_HPP
# define SPAN_HPP

#include<iostream>

class Span
{
private:
	int	*p;
	Span();
public:
	Span(unsigned int N);
	Span(const Span& span);
	Span& operator=(const Span& span);
	~Span();
	void addNumber(int n);
	int	shortestSpan();
	int	longestSpan();
};


#endif