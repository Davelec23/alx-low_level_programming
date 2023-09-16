#include "main.h"
/**
 *_isupper - a program that check for upper and lower letters
 *@c: a parameter for checking letter
 * Return:1 if c is upper case and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
