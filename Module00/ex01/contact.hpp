#ifndef CONTACT_HPP
# define CONTACT_HPP

# include<iostream>

class Contact {

private:
		std::string	firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNum;
		std::string darkistPassword;
public:
	Contact	SettingContact();
	std::string	cutStr(std::string str);
	void	SearchView(int i);
	void	ViewContact();
};

#endif