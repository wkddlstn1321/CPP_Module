#include"easyfind.hpp"

int	main()
{
	int	temp[] = {0,1,2,3,4};
	std::vector<int> a(temp, temp + sizeof(temp) / sizeof(int));
	try
	{
		int	*b = easyfind(a, 5);
		std::cout << *b << std::endl;
		b = easyfind(a, 20);
		std::cout << *b << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}