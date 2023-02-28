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
	int c, str_len;

	str_len = 0;

	for (str_len = 0; a[str_len]; str_len++)
	{
		;
	}

	for (c = 0; n <= (str_len - 1) && c < n; c++)
	{
		printf("%i, ", a[c]);
	}
}
