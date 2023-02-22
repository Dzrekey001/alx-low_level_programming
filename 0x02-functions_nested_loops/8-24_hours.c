#include "main.h"
/**
 * jack_bauer - output the time from 
 * Description:a function that prints minute starting from 
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int i;
	int j;
	int m;
	int s;

	for (i = '0'; i <= '2'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{

			for (m = '0'; m <= '5'; m++)
				for (s = '0'; s <= '9'; s++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(m);
					_putchar(s);
					_putchar('\n');
				}
		}
	}
}
