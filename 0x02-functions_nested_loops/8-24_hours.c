#include "main.h"
/**
 * jack_bauer - output the time from
 * Description:a function that prints minute starting from
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int i;

	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
