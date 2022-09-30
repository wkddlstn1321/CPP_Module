#include"easyfind.hpp"
#include<vector>
#include<list>

int	main()
{
	int	temp[] = {0,1,2,3,4};
	int	size = sizeof(temp) / sizeof(int);
	std::vector<int> vec(temp, temp + size);
	std::list<int> list(temp, temp + size);
	std::vector<int>::iterator viter;
	std::list<int>::iterator liter;
	try
	{
		viter = easyfind(vec, 2);
		liter = easyfind(list, 1);
		std::cout << *viter << std::endl;
		std::cout << *liter << std::endl;
		viter = easyfind(vec, 5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}