#include"Array.hpp"

int	main()
{
	Array<int> num(3);
	Array<int> num2 = num;
	Array<std::string> str(5);
	std::cout << "============= num before =========" << std::endl;
	try
	{
		for (int i = 0 ; i < num2.size() ; i++)
			std::cout << num2[i] << std::endl;
		std::cout << "========== num after =============" << std::endl;
		num[0] = 1;
		num[1] = 2;
		num[2] = 3;
		for (int i = 0 ; i < num2.size() ; i++)
			std::cout << num2[i] << std::endl;
		for (int i = 0 ; i < str.size() ; i++)
			str[i] = "abc";
		std::cout << "========== string test =============" << std::endl;
		for (int i = 0 ; i < str.size() ; i++)
			std::cout << str[i] << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}