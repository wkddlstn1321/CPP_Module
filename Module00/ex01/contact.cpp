#include"contact.hpp"

Contact	Contact::SettingContact()
{
	std::string	str;

	std::cout << "firstName input" << std::endl;
	std::cin >> this->firstName;
	if (std::cin.eof())
		exit(0);
	std::cout << "lastName input" << std::endl;
	std::cin >> this->lastName;
	if (std::cin.eof())
		exit(0);
	std::cout << "nickName input" << std::endl;
	std::cin >> this->nickName;
	if (std::cin.eof())
		exit(0);
	str = phoneNumCheck(str);
	this->phoneNum = str;
	std::cout << "darkistPassword input" << std::endl;
	std::cin >> this->darkistPassword;
	if (std::cin.eof())
		exit(0);
	return (*this);
}

std::string	Contact::cutStr(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::SearchView(int i)
{
	std::cout.width(10);
	std::cout << i << "|";
	std::cout.width(10);
	std::cout << cutStr(this->firstName) << "|";
	std::cout.width(10);
	std::cout << cutStr(this->lastName) << "|";
	std::cout.width(10);
	std::cout << cutStr(this->nickName) << "|" << std::endl;
}

void	Contact::ViewContact()
{
	std::cout << "first Name : " << this->firstName << std::endl;
	std::cout << "last Name : " << this->lastName << std::endl;
	std::cout << "nick Name : " << this->nickName << std::endl;
	std::cout << "phone Num : " << this->phoneNum << std::endl;
	std::cout << "Darkist Password : " << this->darkistPassword << std::endl;
}

std::string	Contact::phoneNumCheck(std::string str)
{
	size_t	i;

	while (1)
	{
		std::cout << "phoneNum input" << std::endl;
		std::cin >> str;
		if (std::cin.eof())
			exit(0);
		for (i = 0; i < str.length(); i++)
		{
			if (str[i] < '0' || str[i] > '9')
				break ;
		}
		if (i == str.length())
			return (str);
		else
			std::cout << "only input number" << std::endl;
	}
}