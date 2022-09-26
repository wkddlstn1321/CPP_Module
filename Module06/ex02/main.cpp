#include"Base.hpp"

int	main()
{
	Base	*abc = generate();

	identify(abc);
	identify(*abc);
}