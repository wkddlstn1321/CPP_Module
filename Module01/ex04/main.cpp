#include<fstream>
#include<iostream>
#include<string.h>

std::string	replaceLine(std::string line, std::string s1, std::string s2)
{
	std::string::size_type	n;
	std::string				sub1;
	std::string				sub2;

	while (true)
	{
		n = line.find(s1);
		if (n == std::string::npos)
			break ;
		sub1 = line.substr(0, n);
		sub2 = line.substr(n + s1.length(), line.length() - 1);
		line = sub1 + s2 + sub2;
	}
	return (line);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "./replace [filename] [s1] [s2]" << std::endl;
		return (0);
	}
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string	fileName = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	std::string	line;
	ifs.open(fileName);
	if (!ifs.is_open())
	{
		std::cout << "file not found" << std::endl;
		return (1);
	}
	ofs.open(fileName + ".replace");
	if (getline(ifs, line))
	{
		line = replaceLine(line, s1, s2);
		ofs.write(line.c_str(), line.length());
	}
	while (true)
	{
		if (!getline(ifs, line))
			break ;
		ofs.write("\n", 1);
		line = replaceLine(line, s1, s2);
		ofs.write(line.c_str(), line.length());
	}
	ifs.close();
	ofs.close();
}
