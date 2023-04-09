#include"PmergeMe.hpp"
#include<ctime>
#include<sys/time.h>

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Empty input" << std::endl;
		return (1);
	}
	PmergeMe a;
	for (int i = 1 ; i < ac ; i++)
	{
		a.pushBack(av[i]);
	}
	std::list<int>::iterator it, its;
	it = a._list.begin();
	its = a._list.end();
	std::cout << "Before: ";
	for ( ; it != its ; it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	a.kSet();
	struct timeval start, end;
	gettimeofday(&start, NULL);
	a.sortVector();
	gettimeofday(&end, NULL);
	long seconds = end.tv_sec - start.tv_sec;
	long microseconds = end.tv_usec - start.tv_usec;
	long elapsed = seconds * 1000000 + microseconds;
	std::cout << "Time to process a range of " << a.getSize() << "elements with std::vector : " << elapsed << std::endl;
	
	gettimeofday(&start, NULL);
	a.sortDeq();
	gettimeofday(&end, NULL);
	long seconds = end.tv_sec - start.tv_sec;
	long microseconds = end.tv_usec - start.tv_usec;
	long elapsed = seconds * 1000000 + microseconds;
	std::cout << "Time to process a range of " << a.getSize() << "elements with std::list : " << elapsed << std::endl;
}