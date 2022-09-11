#include"FragTrap.hpp"
#include"ScarTrap.hpp"

class DiamondTrap : public FragTrap, public ScarTrap
{
private:
	/* data */
public:
	DiamondTrap(/* args */);
	~DiamondTrap();
};

DiamondTrap::DiamondTrap(/* args */)
{
}

DiamondTrap::~DiamondTrap()
{
}
