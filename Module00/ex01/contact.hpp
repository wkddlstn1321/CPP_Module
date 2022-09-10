#ifndef CONTACT_HPP
# define CONTACT_HPP

# include<iostream>
# include<string>

class Contact {

private:
		std::string	firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNum;
		std::string darkistPassword;

public:
	Contact		SettingContact();
	std::string	cutStr(std::string str);
	std::string	phoneNumCheck(std::string str);
	void		SearchView(int i);
	void		ViewContact();
};

#endif