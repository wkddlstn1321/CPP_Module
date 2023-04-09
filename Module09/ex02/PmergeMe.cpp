#include"PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe& ref) {
	(void)ref;
}
PmergeMe&	PmergeMe::operator=(const PmergeMe& ref) {
	(void)ref;
	return (*this);
}
PmergeMe::~PmergeMe() {}
void	PmergeMe::pushBack(char *str)
{
	std::stringstream ss(static_cast<std::string>(str));
	std::string token;
	while (ss >> token)
	{
		if (token.length() > 10)
		{
			std::cout << "Error" << std::endl;
			exit(1);
		}
		int i = 0;
		while (token[i])
		{
			if (token[i] < '0' || token[i] > '9')
			{
				std::cout << "Error" << std::endl;
				exit(1);
			}
			i++;
		}
		long long check = atol(token.c_str());
		if (check > 2147483647)
		{
			std::cout << "Error" << std::endl;
			exit(1);
		}
		this->_list.push_back(check);
	}
}

void	PmergeMe::kSet()
{
	this->_k = this->_list.size() / 500 + 10;
}


void	PmergeMe::printVec()
{
	for (size_t i = 0 ; i < this->_vec.size() ; i++) {
		std::cout << this->_vec[i] << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::printDeq()
{
	std::deque<int>::iterator it, its;
	for (it = this->_deq.begin(), its = this->_deq.end() ; it != its ; it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::sortVector()
{
	//vector 채우기
	pushVector();
	//vector 분할
	mergeSortVector(0, this->_vec.size());
	printVec();
}



void	PmergeMe::pushVector()
{
	std::list<int>::iterator it, its;
	for (it = this->_list.begin(), its = this->_list.end() ; it != its ; it++) {
		this->_vec.push_back(*it);
	}
}

void	PmergeMe::mergeSortVector(size_t left, size_t right)
{
	if (right < this->_k + left)
	{
		insertSortVector(left, right);
		return ;
	}
	size_t mid = (left + right) / 2;
	mergeSortVector(left, mid);
	mergeSortVector(mid + 1, right);
	mergeVector(left, right, mid);
}

void	PmergeMe::mergeVector(size_t left, size_t right, size_t mid)
{
	std::vector<int> temp(right - left + 1);
	size_t	i, j;
	int		idx = 0;
	for (i = left, j = mid + 1 ; i <= mid && j <= right ; ) {
		if (this->_vec[i] > this->_vec[j])
		{
			temp[idx] = this->_vec[j];
			j++;
			idx++;
		}
		else
		{
			temp[idx] = this->_vec[i];
			i++;
			idx++;
		}
	}
	for (size_t k = left, idx = 0 ; k <= right ; k++, idx++) {
		this->_vec[k] = temp[idx];
	}
}


void	PmergeMe::insertSortVector(size_t left, size_t right)
{
	int	temp;
	for (int i = (int)(left + 1) ; i <= (int)right ; i++) {
		int j = i - 1;
		while (j >= (int)left)
		{
			if (this->_vec[j] < this->_vec[j + 1])
				break ;
			temp = this->_vec[j];
			this->_vec[j] = this->_vec[j + 1];
			this->_vec[j + 1] = temp;
			j--;
		}
	}
	std::cout << "==================isv=======================" << std::endl;
	std::vector<int>::iterator it = this->_vec.begin();
	std::vector<int>::iterator its = this->_vec.end();
	for ( ; it != its ; it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "============================================" << std::endl;
}

/////////////////////////////////////////////////////// deq
void	PmergeMe::sortDeq()
{
	pushDeq();
	mergeSortDeq(0, this->_deq.size() - 1);
	printDeq();
}

void	PmergeMe::pushDeq()
{
	std::list<int>::iterator it, its;
	for (it = this->_list.begin(), its = this->_list.end() ; it != its ; it++) {
		this->_deq.push_back(*it);
	}
}

void	PmergeMe::mergeSortDeq(size_t left, size_t right)
{
	if (right < this->_k + left)
	{
		insertSortDeq(left, right);
		return ;
	}
	mergeSortDeq(left, (left + right) / 2);
	mergeSortDeq((left + right) / 2 + 1, right);
	mergeDeq(left, right, (left + right) / 2);
}

void	PmergeMe::mergeDeq(size_t left, size_t right, size_t mid)
{
	std::deque<int> temp(right - left + 1);
	size_t	i, j;
	int		idx = 0;
	for (i = left, j = mid + 1 ; i <= mid && j <= right ; ) {
		if (this->_deq[i] > this->_deq[j])
		{
			temp[idx] = this->_deq[j];
			j++;
			idx++;
		}
		else
		{
			temp[idx] = this->_deq[i];
			i++;
			idx++;
		}
	}
	for (size_t k = left, idx = 0 ; k <= right ; k++, idx++) {
		this->_deq[k] = temp[idx];
	}
}

void	PmergeMe::insertSortDeq(int left, int right)
{
	int	temp;
	for (int i = left + 1 ; i <= right ; i++) {
		int j = i - 1;
		while (j >= left)
		{
			if (this->_deq[j] < this->_deq[j + 1])
				break ;
			temp = this->_deq[j];
			this->_deq[j] = this->_deq[j + 1];
			this->_deq[j + 1] = temp;

			j--;
		}
	}
}

size_t	PmergeMe::getSize()
{
	return (this->_list.size());
}




