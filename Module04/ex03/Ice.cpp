#include"Ice.hpp"
#include<algorithm>
#include<ctype.h>

Ice::Ice()
{
}

Ice::Ice(std::string type)
{
	std::transform(type.begin(), type.end(), this->type.begin(), tolower);
}

Ice::Ice(const Ice& cure)
{
	this->type = cure.type;
}

Ice &Ice::operator=(const Ice& cure)
{
	this->type = cure.type;
	return (*this);
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
}