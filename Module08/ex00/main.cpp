#include"easyfind.hpp"
#include<vector>
#include<list>
#include<deque>

int	main()
{
	// int	temp[] = {0,1,2,3,4};
	// int	size = sizeof(temp) / sizeof(int);
	std::vector<int> vec;
	std::list<int> list;
	std::deque<int> deq;
	for (int i = 0 ; i < 5 ; i++)
	{
		vec.push_back(i);
		deq.push_back(i);
		list.push_back(i);
	}
	std::vector<int>::iterator viter;
	std::list<int>::iterator liter;
	std::deque<int>::iterator diter;
	
	try
	{
		for (int i = 0 ; i < 5 ; i++)
		{
			viter = easyfind(vec, i);
			liter = easyfind(list, i);
			diter = easyfind(deq, i);
			std::cout << "vector iter : " << *viter << " ";
			std::cout << "list iter : " << *liter << " ";
			std::cout << "deque iter : " << *diter << std::endl;
		}
		viter = easyfind(vec, 5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}