#include "main.h"
/**
 * int _isdigit(int c)-A program that distinguishes between letter and digit
 * @c-a parameter that check the program
 */
int _isdigit(int c)
{
	if(c >= '0' && c<= '9')
		return (1);
	else
		return (0);
}
