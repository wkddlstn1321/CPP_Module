#include"Array.hpp"

int	main()
{
	Array<int> arr(10);
	const Array<int> arr2(2);

	arr2[1] = 5;
	for (int i = 0 ; i < 10 ; i++)
		std::cout << arr2[i] << std::endl;
}