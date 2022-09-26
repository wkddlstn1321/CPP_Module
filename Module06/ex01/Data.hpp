#ifndef DATA_HPP
# define DATA_HPP

#include<cstdint>
#include<iostream>

typedef struct Data
{
	int			i;
	char		c;
	float		f;
	std::string	s;
} Data;

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif