#include "main.h"
/**
 * print_line - a function that draws a straight line
 * @n: paremeter for the number of line
 * Return: Always 0.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
	}
	_putchar('\n');
}
