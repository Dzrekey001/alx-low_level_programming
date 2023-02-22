#include "main.h"
/**
 * print_to_98 - print number from n to 98
 * Description: prints all natural numbers from n to 98
 */
void print_to_98(int n)
{
	int i;
	
	for (i = n; i <= 98; i++)
	{
		if (i < 10)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');

			if (!((n == 98)))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
