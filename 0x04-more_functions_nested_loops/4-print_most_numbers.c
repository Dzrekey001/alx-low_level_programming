#include "main.h"
/**
 * print_most_numbers - print natural numbers with 2 and 4
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int j;

	for (j = 48; j <= 57; j++)
	{
		if (!(j == '2' || j == '4'))
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
