#include"iter.hpp"

int main()
{
	int	a[5] = {1,2,3,4,5};
	float f[5] = {0.1, 0.2, 0.3, 0.4, 0.5};
	std::string s[5] = {"1Asd", "2asd", "3asd", "4asd", "5asd"};

	std::cout << "before===============" << std::endl;
	::iter(a, 5, ::prin);
	::iter(a, 5, ::sumTen);
	::iter(f, 5, ::prin);
	::iter(f, 5, ::sumTen);
	std::cout << "after===============" << std::endl;
	::iter(a, 5, ::prin);
	::iter(f, 5, ::prin);
	std::cout << "string===============" << std::endl;
	::iter(s, 5, ::prin);
}
