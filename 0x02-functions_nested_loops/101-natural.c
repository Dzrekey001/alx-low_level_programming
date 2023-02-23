#include <stdio.h>
#include "main.h"
/**
 * main - computes the sum of all mutiples of 3 or 5 below 1024
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	int result;

	result = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			result += i;
	}
	printf("%i", result);
	_putchar('\n');
	return (0);
}

