#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of time \ should be printed
 * Description: a function that draws a diagonal line
 */

void print_diagonal(int n)
{
	int j;
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
