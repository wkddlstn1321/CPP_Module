#include"RPN.hpp"

RPN::RPN() {}
RPN::~RPN() {}
RPN::RPN(const RPN& ref) {
	*this = ref;
}
RPN&	RPN::operator=(const RPN& ref) {
	this->_stack = ref._stack;
	return (*this);
}


void	RPN::add(std::string token, int check){
	if (check == 5)
	{
		if (token.length() == 2)
			this->_stack.push((token[1] - 48) * -1);
		else
			this->_stack.push(token[0] - 48);
	}
	else {
		int	a = this->_stack.top();
		this->_stack.pop();
		int	b = this->_stack.top();
		this->_stack.pop();
		this->_stack.push(calculrater(a, b, check));
	}
}

int	RPN::tokenParse(std::string token){
	int a[4] = {43, 45, 47, 42};
	if (token[0] != '-' && token.length() > 2)
		return (0);
	if (token.length() == 2 && token[1] >= '0' && token[1] <= '9')
		return (5);
	char	c = token[0];
	if (c >= 48 && c <= 57)
	{
		return (5);
	}
	if (this->_stack.size() < 2)
		return (0);
	for (int i = 0 ; i < 4 ; i++) {
		if (c == a[i])
		{
			return (i + 1) ;
		}
	}
	return (0);
}

int		RPN::calculrater(int a, int b, int check) {
	if (check == 1)
		return (b + a);
	if (check == 2)
		return (b - a);
	if (check == 3)
		return (b / a);
	else
		return (b * a);
}

int		RPN::stackTop() {
	return (this->_stack.top());
}
int		RPN::stackSize() {
	return (this->_stack.size());
}

