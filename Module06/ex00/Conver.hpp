#ifndef CONVER_HPP
# define CONVER_HPP

#include<iostream>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include<ctype.h>
#include<cmath>

bool	isCharType(char *str);
bool	isnanType(std::string s, char *pos, double d);
bool	isIntType(double d, char *pos, std::string s);
bool	isFloatType(char *str);
bool	isDoubleType(char *str);

int	prinCharType(char c);
int	prinIntType(int i);
int	prinNanType();
int prinFloatType(float f);
int prinDoubleType(double d);

#endif