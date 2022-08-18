#include<iostream>
#include"class.cpp"

int	main(void)
{
	PhoneBook pb;
	int			i;

	i = 0;
	while (1)
	{
		std::string cmd = "";
		std::cin >> cmd;
		if (cmd == "ADD") {
			pb.AddContact(i);
			std::cout << pb.contact[i].lastName << "\n";
			std::cout << pb.contact[i].nickName << "\n";
			std::cout << pb.contact[i].phoneNum << "\n";
			std::cout << pb.contact[i].darkistPassword << "\n";
		}
		else if (cmd == "EXIT")
			break ;
		i++;
	}
}