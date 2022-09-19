#ifndef ICE_HPP
# define ICE_HPP

#include"AMateria.hpp"

class Ice : public AMateria
{
private:

public:
	Ice();
	Ice(std::string type);
	Ice(const Ice& cure);
	Ice &operator=(const Ice& cure);
	~Ice();
	AMateria* clone() const;
};

#endif