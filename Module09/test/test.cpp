#include<iostream>
#include<sstream>
#include<map>
#include<list>
#include<vector>
#include <random>


using namespace std;

list<int> _list;

std::list<int>::iterator	getListIndex(size_t idx)
{
	std::list<int>::iterator it = _list.begin();
	for (size_t i = 0 ; i < idx ; i++) {
		it++;
	}
	return (it);
}

void	insertSortList(size_t left, size_t right)
{
	int	temp;
	std::list<int>::iterator i, j, k, leftIt, rightIt;
	leftIt = getListIndex(left);
	rightIt = getListIndex(right + 1);
	i = getListIndex(left + 1);
	for ( ; i != rightIt ; i++) {
		j = i;
		j--;
		while (j != leftIt)
		{
			k = j;
			k++;
			if (*j < *k)
				break ;
			temp = *j;
			*j = *k;
			*k = temp;
			j--;
		}
	}
}


int main()
{
	// std::list<int> _list;
	std::list<int>::iterator it, its;
	for (int i = 10 ; i >= 0 ; i--) {
		_list.push_back(i);
	}
	it = _list.begin();
	its = _list.end();
	for ( ; it != its ; it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	// vector<int> vec(10); // 크기가 10인 vector 생성

	// random_device rd;
	// mt19937 gen(rd());
	// uniform_int_distribution<int> dist(0, 99); // 0 ~ 99 범위에서 랜덤한 값 생성

	// // vector에 랜덤한 값을 채움
	// for (int i = 0; i < vec.size(); i++) {
	// 	vec[i] = dist(gen);
	// }

	// // vector 출력
	// for (int i = 0; i < vec.size(); i++) {
	// 	std::cout << vec[i] << " ";
	// }
	// cout << endl;
}