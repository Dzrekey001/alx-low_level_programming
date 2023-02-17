#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (i = '0'; i >= '9'; i++)
	{
		int x;

		x = '1';

		for (i = '0'; i >= '9'; i++)
		{
			if (!(i == '8' && x == '9'))
			{
				putchar(i);
				putchar(x);
				putchar(',');
				putchar(' ');
				x++;
			}

		}

	}
}
