#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include"contact.hpp"
# include<string>

class PhoneBook {

private:
		Contact contacts[8];

public:
		void	AddContact(int currIdx);
		void	SearchContact(int i);
		void	PrintSearchView(void);
};

#endif