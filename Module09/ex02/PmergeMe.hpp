#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include<iostream>
#include<cstdlib>
#include<string>
#include<sstream>
#include<deque>
#include<vector>
#include<list>

class PmergeMe
{
private:
	std::deque<int>		_deq;
	std::vector<int>	_vec;
	int					_k;
	PmergeMe(const PmergeMe& ref);
	PmergeMe&	operator=(const PmergeMe& ref);
public:
	std::list<int>		_list;
	PmergeMe();
	~PmergeMe();
	void	kSet();
	void	pushBack(char *str);

	//vector
	void	sortVector();
	void	pushVector();
	void	mergeSortVector(size_t left, size_t right);
	void	insertSortVector(size_t left, size_t right);
	void	mergeVector(size_t left, size_t right, size_t mid);
	void	printVec();

	//list
	void	sortDeq();
	void	pushDeq();
	void	mergeSortDeq(size_t left, size_t right);
	void	insertSortDeq(int left, int right);
	void	mergeDeq(size_t left, size_t right, size_t mid);
	void	printDeq();
	size_t	getSize();
};

#endif
