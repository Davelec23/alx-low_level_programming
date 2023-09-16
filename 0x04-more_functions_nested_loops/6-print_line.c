#include "main.h"
/**
 * print_line - A program that draw a straight line to the terminal
 * Return: A straight line
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		int i;

		for (i = 0 ; i <= n; i++ )
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
