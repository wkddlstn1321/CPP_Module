#include"Conver.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "[./typeCast] [argument]" << std::endl;
		return (1);
	}
	if (isCharType(av[1]))
	{
		char c = av[1][0];
		return (prinCharType(c));
	}
	char	*pos;
	double	d = std::strtod(av[1], &pos);
	std::string	s = static_cast<std::string>(av[1]);
	if (isnanType(s, pos, d))
	{
		return (prinNanType());
	}
	if (isIntType(d, pos, av[1]))
	{
		int	i = std::atoi(av[1]);
		return (prinIntType(i, s));
	}
	if (std::strlen(pos) == 1)
		return (prinFloatType(static_cast<float>(d), s));
	else
		return (prinDoubleType(d, s));
}
