#include"main.hpp"

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
		std::cout << "input cmd" << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD")
			pb.AddContact(currIdx);
		else if (cmd == "SEARCH")
			pb.SearchContact(i);
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "must input ADD or SEARCH or EXIT" << std::endl;
		i++;
	}
}
