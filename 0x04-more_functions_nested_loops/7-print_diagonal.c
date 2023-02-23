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

	for (j = 0; j <= n; j++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
			for (i = 1; i <= j; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');

		}
	}
	_putchar('\n');
	return (0);
}
