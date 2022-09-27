#include"iter.hpp"

int main()
{
	int	a[10] = {0,1,2,3,4,5,6,7,8,9};
	::iter(a, 10, ::prin);
	::iter(a, 10, ::sumTen);
	std::cout << "after===============" << std::endl;
	::iter(a, 10, ::prin);
}