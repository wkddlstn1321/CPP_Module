#include"Span.hpp"

int main()
{
	Span sp = Span(10241);
	Span sp2;
	sp2 = sp;
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "========size : 10241 test=========" << std::endl;
		for (int i = 0 ; i < 11 ; i++)
			sp.copyPushBack();
		sp.addNumber(10003);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "========size out add test=========" << std::endl;
		sp.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}