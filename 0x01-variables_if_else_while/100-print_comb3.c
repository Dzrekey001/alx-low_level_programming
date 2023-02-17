#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int x;
	int y;

	y = '1';

	for (i = '0'; i <= '8'; i++)
	{

		for (x = y; x <= '9'; x++)
		{
			putchar(i);
			putchar(x);

			if (!(i == '8' && x == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
		y++;

	}
	putchar('\n');
	return (0);
}
