#include"Harl.hpp"

void	Harl::complain(std::string name)
{
	std::string	str[4];
	void(Harl::*f[4])(void);

	str[0] = "DEBUG";
	str[1] = "INFO";
	str[2] = "WARNING";
	str[3] = "ERROR";
	f[0] = &Harl::debug;
	f[1] = &Harl::info;
	f[2] = &Harl::warning;
	f[3] = &Harl::error;
	for (int i = 0 ; i < 4 ; i++)
	{
		if (str[i] == name)
		{
			(this->*(f[i]))();
			return ;
		}
	}
	std::cout << name << " : non exist complain" << std::endl;
}

void	Harl::debug()
{
	std::cout << "DEBUG\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "INFO\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "WARNING\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "ERROR\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}
