#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include"ClapTrap.hpp"

class ScarTrap : public ClapTrap
{

private:


public:
	ScarTrap();
	ScarTrap(std::string name);
	~ScarTrap();
	ScarTrap(const ScarTrap &scartrap);
	ScarTrap&	operator=(ScarTrap scarTrap);
	void	attack(const std::string& target);
	void	guardGate();
};

#endif