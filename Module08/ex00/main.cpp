#include"easyfind.hpp"
#include<vector>
#include<stack>

int	main()
{
	int	temp[] = {0,1,2,3,4};
	std::vector<int> a(temp, temp + sizeof(temp) / sizeof(int));
	std::vector<int>::iterator iter;
	try
	{
		iter = easyfind<std::vector<int> >(a, 4);
		std::cout << a[*iter] << std::endl;
		std::cout << *(iter = easyfind(a, 5));
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}