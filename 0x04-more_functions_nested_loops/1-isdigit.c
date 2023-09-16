#include "main.h"
/**
 *_isdigit - A program that distinguishes between letter and digit
 *@c: a parameter that check the program
 *Return: 1 if c is digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
