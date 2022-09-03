#include"phoneBook.hpp"

int	main(void)
{
	std::string	cmd;
	PhoneBook	pb;
	int			i;
	int			currIdx;

	i = 0;
	while (1)
	{
		currIdx = i % 8;
		std::cout << "=====input cmd=====" << std::endl;
		std::cin >> cmd;
		if (std::cin.eof())
			exit(0);
		if (cmd == "ADD")
		{
			pb.AddContact(currIdx);
			i++;
		}
		else if (cmd == "SEARCH")
			pb.SearchContact(i - 1);
		else if (cmd == "EXIT")
		{
			std::cout << "exit PhoneBook~~" << std::endl;
			break;
		}
		else
			std::cout << "must input ADD or SEARCH or EXIT" << std::endl;
	}
}
