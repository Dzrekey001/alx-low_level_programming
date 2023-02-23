#include "main.h"
/**
 * print_times_table - print out timetable
 * @n: number of times to be printed
 * Description:a function that prints the n times table, starting with 0
 */

void print_times_table(int n)
{
	if (!(n > 15 || n < 0))
	{
		int i;
		int j;
		int m;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				m = i * j;

				putformat(m);
			}
			_putchar('\n');
		}
	}

}
/**
 * putformat - format the time table
 *
 * @m: input paremeter
 */


void putformat(int m)
{
	if (m < 10)
	{
		if (!(j == 0))
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar(m + '0')
	}
	else if (m < 100)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
	}
	else
	{
		_putchar(' ');
		_putchar((m / 100) + '0');
		_putchar((m / 10 % 10) + '0');
		_putchar((m % 10) + '0');
	}
		if (!(j >= n))
		{
			_putchar(',');
		}

}
