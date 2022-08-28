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
	Contact	SettingContact()
	{
		Contact contact;
		std::cout << "firstName input\n";
		std::cin >> this->firstName;
		std::cout << "lastName input\n";
		std::cin >> this->lastName;
		std::cout << "nickName input\n";
		std::cin >> this->nickName;
		std::cout << "phoneNum input\n";
		std::cin >> this->phoneNum;
		std::cout << "darkistPassword input\n";
		std::cin >> this->darkistPassword;
		return (*this);
	}
	void	ViewContact()
	{
		std::cout << this->firstName << std::endl;
		std::cout << this->lastName << std::endl;
		std::cout << this->nickName << std::endl;
		std::cout << this->phoneNum << std::endl;
		std::cout << this->darkistPassword << std::endl;
	}
};


class PhoneBook {

private:
		Contact contacts[8];

public:
		void	AddContact(int i)
		{
			Contact contact;

			this->contacts[i % 8] = contact.SettingContact();
		}

		void	SearchContact(int i)
		{
			int	idx;

			std::cout << "input Search index" << std::endl;
			while (1)
			{
				std::cin >> idx;
				if (!std::cin.fail())
					break ;
				std::cout << "wrong index\nretry input index!!!" << std::endl;
				std::cin.clear();
				std::cin.ignore(256, '\n');
			}
			if (i < idx)
			{
				std::cout << "non non be yory" << std::endl;
				return ;
			}
			PrintContact(i);
		}

		void	PrintContact(int i)
		{
			this->contacts[i % 8].ViewContact();
		}
};

#endif