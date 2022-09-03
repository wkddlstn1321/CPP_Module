#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include"contact.hpp"
# include<string>

class PhoneBook {

private:
		Contact contacts[8];

public:
		void	AddContact(int currIdx)
		{
			Contact contact;

			this->contacts[currIdx] = contact.SettingContact();
		}

		void	SearchContact(int i)
		{
			int		idx;

			if (i < 0)
			{
				std::cout << "PhoneBook is Empty" << std::endl;
				return ;
			}
			PrintSearchView();
			for (int i = 0; i < 8; i++)
				this->contacts[i].SearchView(i);
			while (1)
			{
				std::cout << "=====input Search index=====" << std::endl;
				std::cin >> idx;
				if (!std::cin.fail())
				{
					if (i < idx || idx < 0)
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

		void	PrintSearchView()
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
};

#endif