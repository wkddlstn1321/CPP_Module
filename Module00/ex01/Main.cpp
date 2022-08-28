#include"main.hpp"

int	main(void)
{
	std::string	cmd;
	PhoneBook	pb;
	int			i;

	i = 0;
	while (1)
	{
		std::cout << "input cmd" << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD")
			pb.AddContact(i);
		else if (cmd == "SEARCH")
			pb.SearchContact(i);
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "must input ADD or SEARCH or EXIT" << std::endl;
		i++;
	}
}