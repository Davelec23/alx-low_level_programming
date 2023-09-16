#include "main.h"
/**
 * int _isupper(int c)-a program that check for upper and lower letters
 * @c- a parameter for checking letter
 */
int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
