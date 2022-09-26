#include"Data.hpp"

int	main()
{
	Data *data = new Data;
	Data *temp = NULL;
	uintptr_t ptr;

	data->i = 10;
	data->c = 'c';
	data->f = 10.5;
	data->s = "sad";
	ptr = serialize(data);
	temp = deserialize(ptr);
	std::cout << "i = " << temp->i << std::endl;
	std::cout << "c = " << temp->c << std::endl;
	std::cout << "f = " << temp->f << std::endl;
	std::cout << "s = " << temp->s << std::endl;
	delete data;
}