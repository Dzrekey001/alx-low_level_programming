#include "main.h"
#include <stdio.h>
/**
 * print_array - print the nth element of an array
 * of integers
 * @a: point to an array
 * @n: nth number of element
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (c != n - 1)
		{
			printf("%d, ", a[c]);
		}
		else
		{
			printf("%d", a[c]);
		}
	}
	printf("\n");
}
