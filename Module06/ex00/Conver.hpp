#ifndef CONVER_HPP
# define CONVER_HPP

#include<iostream>
#include<string>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<iomanip>

bool	isCharType(char *str);
bool	isnanType(std::string s, char *pos, double d);
bool	isIntType(double d, char *pos, std::string s);
bool	isFloatType(char *str);
bool	isDoubleType(char *str);

int	prinCharType(char c);
int	prinIntType(int i, std::string s);
int	prinNanType();
int prinFloatType(float f, std::string s);
int prinDoubleType(double d, std::string s);

#endif