#include "main.h"

/**
 *print_alphabet_x10(void)-print 10x alphabet in lower case
 */

void print_alphabet_x10(void)
{
int a = 0;

while (a < 10)
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
