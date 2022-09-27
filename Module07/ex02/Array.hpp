#ifndef ARRAY_HPP
# define ARRAY_HPP

#include<iostream>
#include<exception>

template<typename T>
class Array
{
private:
	T				*array;
	unsigned int	arraySize;
public:
	Array()
	{
		this->array = new T[0];
		this->arraySize = 0;
	}

	Array(unsigned int n)
	{
		this->array = new T[n];
		this->arraySize = n;
	}
	Array(const Array& array)
	{
		delete[] this->array;
		this->arraySize = array.size();
		this->array = new T[this->arraySize];
		for (int i = 0 ; i < this->arraySize ; i++)
		{
			this->array[i] = array[i];
		}
	}

	Array& operator=(const Array& Array)
	{
		delete[] this->array;
		this->arraySize = array.size();
		this->array = new T[this->arraySize];
		for (int i = 0 ; i < this->arraySize ; i++)
		{
			this->array[i] = array[i];
		}
		return (*this);
	}

	T&	operator[](int i)
	{
		try
		{
			if (i >= this->arraySize)
				throw throwException();
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
			return ;
		}
		return (this->array[i]);
	}

	~Array()
	{
		delete[] this->array;
	}

	int	size() const
	{
		return (this->arraySize);
	}

	class throwException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("out of Array");
		}
	};
};

#endif