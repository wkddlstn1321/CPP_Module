#include"main.hpp"

int	main(void)
{
	std::string	cmd;
	PhoneBook	pb;
	int			i;

	i = 0;
	while (1)
	{
		i %= 8;
		std::cout << "input cmd" << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			pb[i] = pb.AddContact(i);
			//pb.PrintContact(i);
		}
		else if (cmd == "SEARCH")
			;//pb.Search();
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "must input ADD or SEARCH or EXIT" << std::endl;
		i++;
	}
}