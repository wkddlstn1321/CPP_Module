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
	Contact	SettingContact(void)
	{
		Contact contact;
		std::cout << "firstName input\n";
		std::cin >> contact.firstName;
		std::cout << "lastName input\n";
		std::cin >> contact.lastName;
		std::cout << "nickName input\n";
		std::cin >> contact.nickName;
		std::cout << "phoneNum input\n";
		std::cin >> contact.phoneNum;
		std::cout << "darkistPassword input\n";
		std::cin >> contact.darkistPassword;
		return (contact);
	}
};


class PhoneBook {

private:
		Contact contact[8];

public:
		Contact	AddContact(int	i)
		{
			Contact contact;

			contact.SettingContact();
			this.contact[i]
		}

		// void	PrintContact(int i)
		// {
		// 	std::cout << this->contact[i].firstName << std::endl;
		// 	std::cout << this->contact[i].lastName << std::endl;
		// 	std::cout << this->contact[i].nickName << std::endl;
		// 	std::cout << this->contact[i].phoneNum << std::endl;
		// }
};

#endif