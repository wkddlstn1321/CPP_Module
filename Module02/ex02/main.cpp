#include"Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	std::cout << "================calculation====================" << std::endl;
	Fixed	c(4.0f);
	Fixed	d(2.0f);
	std::cout << "4.0 + 2.0 = " << c + d << std::endl;
	std::cout << "4.0 - 2.0 = " << c - d << std::endl;
	std::cout << "4.0 * 2.0 = " << c * d << std::endl;
	std::cout << "4.0 / 2.0 = " << c / d << std::endl;
	std::cout << "=================compare=======================" << std::endl;
	if (c > d && d < c)
		std::cout << "> < true" << std::endl;
	if (c < d && d > c)
		std::cout << "이거 출력 되면 대형사고" << std::endl;
	d = c;
	if (c == d && c >= d && c <= d && c != a)
		std::cout << "== >= <= != true" << std::endl;
	else
		std::cout << "이거 출력 되면 대형사고" << std::endl;
	std::cout << "=================decrement======================" << std::endl;
	c = 0;
	std::cout << --c << std::endl;
	std::cout << c << std::endl;
	std::cout << c-- << std::endl;
	std::cout << c << std::endl;
	return 0;
}
