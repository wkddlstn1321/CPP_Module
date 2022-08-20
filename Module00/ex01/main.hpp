#ifndef MAIN_HPP
# define MAIN_HPP

# include<iostream>

class Contact {

private:
		std::string	firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNum;
		std::string darkistPassword;
public:
	void	SetContact(void)
	{
		std::cout << "firstName input\n";
		std::cin >> firstName;
		std::cout << "lastName input\n";
		std::cin >> lastName;
		std::cout << "nickName input\n";
		std::cin >> nickName;
		std::cout << "phoneNum input\n";
		std::cin >> phoneNum;
		std::cout << "darkistPassword input\n";
		std::cin >> darkistPassword;
	}
	std::string	GetFirstName(void)
	{
		return (firstName);
	}
	std::string GetLastName(void)
	{
		return (lastName);
	}
	std::string GetNickName(void)
	{
		return (nickName);
	}
	std::string GetphoneNum(void)
	{
		return (phoneNum);
	}
	std::string GetDakistPassword(void)
	{
		return (darkistPassword);
	}
	std::string GetFirstName(void)
	{
		return (firstName);
	}
};


class PhoneBook {

private:
		Contact contact[8];

public:
		void	AddContact(int	i);
};

#endif