#include"main.h"
/**
 * jack_bauer - A program that prints jack bauer day life from 0 to 23:59
 * Return :Number from 0:00-23:59
 */
void jack_bauer(void)
{
   int a, b;

   for (a = 0; a <= 23; a++)
   {
      for (b = 0; b <= 59; b++)
	  {
	     _putchar (a / 10 + '0');
		 _putchar (a % 10 + '0');
		 _putchar (':');
		 _putchar (b / 10 + '0');
		 _putchar (b % 10 + '0');
		 _putchar ('\n');
	  }
   }
}
