#include"contact.hpp"

Contact	Contact::SettingContact()
{
	std::cout << "firstName input\n";
	std::cin >> this->firstName;
	if (std::cin.eof())
		exit(0);
	std::cout << "lastName input\n";
	std::cin >> this->lastName;
	if (std::cin.eof())
		exit(0);
	std::cout << "nickName input\n";
	std::cin >> this->nickName;
	if (std::cin.eof())
		exit(0);
	std::cout << "phoneNum input\n";
	std::cin >> this->phoneNum;
	if (std::cin.eof())
		exit(0);
	std::cout << "darkistPassword input\n";
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
	std::cout << cutStr(this->lastName) << "|" << std::endl;
}

void	Contact::ViewContact()
{
	std::cout << "first Name : " << this->firstName << std::endl;
	std::cout << "last Name : " << this->lastName << std::endl;
	std::cout << "nick Name : " << this->nickName << std::endl;
	std::cout << "phone Num : " << this->phoneNum << std::endl;
	std::cout << "Darkist Password : " << this->darkistPassword << std::endl;
}
