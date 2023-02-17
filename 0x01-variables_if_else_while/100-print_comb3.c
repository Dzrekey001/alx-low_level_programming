#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		int x;

		x = '1';
 
		for (x = '0'; x <= '9'; x++)
		{
			if (!(x == '8' && x == '9'))
			{
				putchar(i);
				putchar(x);
				putchar(',');
				putchar(' ');
				x++;
			}

		}

	}
	return (0);
}
