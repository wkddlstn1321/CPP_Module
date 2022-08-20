#include"main.hpp"

Contact PhoneBook::SetContact(void)
{
	Contact	contact;

	std::cout << "firstName input\n";
	std::cin >> contact.firstName;
	std::cout << "lastName input\n";
	std::cin >> contact.lastName;
	std::cout << "nickName input\n";
	std::cin >> contact[i % 8].nickName;
	std::cout << "phoneNum input\n";
	std::cin >> contact[i % 8].phoneNum;
	std::cout << "darkistPassword input\n";
	std::cin >> contact[i % 8].darkistPassword;
	return (contact);
}

int	main(void)
{
	PhoneBook	pb;
	int			i;

	i = 0;
	while (1)
	{
		std::string cmd;
		std::cout << "input cmd" << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD")
			pb.AddContact(i);
		else if (cmd == "SEARCH")
			pb.Search();
		else if (cmd == "EXIT")
			break ;
		else
		{
			std::cout << "must input ADD or SEARCH or EXIT" << std::endl;
		}
		i++;
	}
}