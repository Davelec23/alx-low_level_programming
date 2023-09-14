#include "main.h"

/**
 * print_alphabet ten times in a new line - Entry point
 * Return:0
 */

void print_alphabet_x10(void)
{
int a= 0;

while (a<10)

{
        char c = 'a';

        while (c <= 'z')
        {
                _putchar(c);
                c++;

        }
        _putchar('\n');
      a++;
}
}
