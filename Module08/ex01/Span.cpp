#include"Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N)
{
	this->size = N;
}

Span::Span(const Span& span)
{
	this->size = span.size;
	std::copy(span.v.begin(), span.v.end(), this->v.begin());
}

Span& Span::operator=(const Span& span)
{
	this->size = span.size;
	std::copy(span.v.begin(), span.v.end(), this->v.begin());
	return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
	if (this->v.size() == this->size)
		throw SizeOut();
	this->v.push_back(n);
}

int	Span::shortestSpan()
{
	if (this->v.size() <= 1)
		throw FewElements();
	std::vector<int> span;
	int	min = 2147483647;
	span = this->v;
	std::sort(span.begin(), span.end());
	for (unsigned int i = 0 ; i < this->v.size() - 1 ; i++)
	{
		if (min > span[i + 1] - span[i])
			min = span[i + 1] - span[i];
	}
	std::cout << "this" << this->v[0] << std::endl;
	std::cout << "span" << span[0] << std::endl;
	return (min);
}

int	Span::longestSpan()
{
	if (this->v.size() <= 1)
		throw FewElements();
	int	max = *std::max_element(this->v.begin(), this->v.end());
	int	min = *std::min_element(this->v.begin(), this->v.end());
	
	return (max - min);
}

int	Span::getSize()
{
	return (this->v.size());
}