#include "main.h"
/**
 * print triangle - print a triangle
 * @size: number of size of triangel
 * Return: nothing
 */

void print_tiangle(int size)
{
	int i;
	int j;
	int n;
	
	n = size - 1;
	i = 0;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
