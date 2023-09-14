#include "main.h"
/**
 * main - prints _putchar, followd by a new linees
 * Return: Alwys 0 (Success)
 */
int main(void)
{
	char dave[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(dave[c]);
	}
	_putchar('\n');
	return (0);
}
