#include "main.h"
/**
 * print_line - a function that draws a straight line
 * @n: paremeter for the number of line
 * Return: Always 0.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
	return (0);
}