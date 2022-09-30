#include"Span.hpp"

Span::Span()
{
	this->v = new std::vector<int>;
}

Span::Span(unsigned int N)
{
	this->v = new std::vector<int>(N);
	this->size = N;
}

Span::Span(const Span& span)
{
	this->v = new std::vector<int>(span.size);
	std::copy(span.v->begin(), span.v->end(), this->v->begin());
}

Span& Span::operator=(const Span& span)
{
	delete this->v;
	this->v = new std::vector<int>(span.size);
	std::copy(span.v->begin(), span.v->end(), this->v->begin());
	return (*this);
}

Span::~Span()
{
	delete this->v;
}

void Span::addNumber(int n)
{
	if (this->v->size() == this->size)
		throw SizeOut();
	this->v->push_back(n);
}

// int	Span::shortestSpan()
// {
// }

int	Span::longestSpan()
{
	if (this->v->size() <= 1)
		throw FewElements();
	int	max = *std::max_element(this->v->begin(), this->v->end());
	int	min = *std::min_element(this->v->begin(), this->v->end());
	
	return (max - min);
}