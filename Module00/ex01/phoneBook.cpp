#include"phoneBook.hpp"

void	PhoneBook::AddContact(int currIdx)
{
	Contact contact;

	this->contacts[currIdx] = contact.SettingContact();
}

void	PhoneBook::SearchContact(int i)
{
	int		idx;

	if (i < 0)
	{
		std::cout << "PhoneBook is Empty" << std::endl;
		return ;
	}
	PrintSearchView();
	for (int j = 0; j < 8; j++)
		this->contacts[j].SearchView(j);
	while (1)
	{
		std::cout << "=====input Search index=====" << std::endl;
		std::cin >> idx;
		if (std::cin.eof())
			exit(0);
		if (!std::cin.fail())
		{
			if (i < idx || idx < 0 || idx > 7)
			{
				std::cout << "non exist index" << std::endl;
				continue ;
			}
			break ;
		}
		std::cout << "wrong index\nPlease input normal index!!!" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
	}
	this->contacts[idx].ViewContact();
}

void	PhoneBook::PrintSearchView(void)
{
	std::cout.width(10);
	std::cout << "index" << "|";
	std::cout.width(10);
	std::cout << "firstName" << "|";
	std::cout.width(10);
	std::cout << "lastName" << "|";
	std::cout.width(10);
	std::cout << "nickName" << "|" << std::endl;
}