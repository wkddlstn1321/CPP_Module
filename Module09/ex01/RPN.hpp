#ifndef RPN_HPP
# define RPN_HPP

#include<stack>
#include<string>

class RPN
{
private:
	std::stack<int> _stack;

public:
	RPN();
	~RPN();
	RPN(const RPN& ref);
	RPN&	operator=(const RPN& ref);
	void	add(std::string token, int check);
	int		tokenParse(std::string token);
	int		calculrater(int a, int b, int check);
	int		stackTop();
	int		stackSize();
};

#endif
