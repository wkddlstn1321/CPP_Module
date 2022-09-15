#include"FragTrap.hpp"
#include"ScarTrap.hpp"

class DiamondTrap : public FragTrap, public ScarTrap
{
private:
	std::string	name;
public:
};
