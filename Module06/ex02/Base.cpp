#include"Base.hpp"

Base::~Base()
{
}

Base*	generate(void)
{
	srand(time(NULL));
	if ((rand() % 3) == 0)
	{
		static A dum;
		A *a = &dum;
		return (dynamic_cast<Base*>(a));
	}
	else if ((rand() % 3) == 1)
	{
		static B dum;
		B *b = &dum;
		return (dynamic_cast<Base*>(b));
	}
	else
	{
		static C dum;
		C *c = &dum;
		return (dynamic_cast<Base*>(c));
	}

}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != 0)
		std::cout << "Pointer A " << std::endl;
	else if (dynamic_cast<B*>(p) != 0)
		std::cout << "Pointer B " << std::endl;
	else
		std::cout << "Pointer C " << std::endl;
}

void identify(Base& p)
{
	A a;
	B b;
	try
	{
		a = dynamic_cast<A&>(p);
	}
	catch(const std::exception& e)
	{
		try
		{
			b = dynamic_cast<B&>(p);
		}
		catch(const std::exception& e)
		{
			std::cout << "Ref C " << std::endl;
			return ;
		}
		std::cout << "Ref B " << std::endl;
		return ;
	}
	std::cout << "Ref A " << std::endl;
	return ;
}
