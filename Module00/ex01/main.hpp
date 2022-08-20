#ifndef MAIN_HPP
# define MAIN_HPP

# include<iostream>

class Contact {

public:
		std::string	firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNum;
		std::string darkistPassword;

};


class PhoneBook {
public:
		Contact contact[8];

		void AddContact(int i) {
			std::cout << "firstName input\n";
			std::cin >> contact[i % 8].firstName;
			std::cout << "lastName input\n";
			std::cin >> contact[i % 8].lastName;
			std::cout << "nickName input\n";
			std::cin >> contact[i % 8].nickName;
			std::cout << "phoneNum input\n";
			std::cin >> contact[i % 8].phoneNum;
			std::cout << "darkistPassword input\n";
			std::cin >> contact[i % 8].darkistPassword;
		}
};

#endif