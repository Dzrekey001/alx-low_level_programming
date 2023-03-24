#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - print numbers enter as arguments
 * @separator: a string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list all_numbers;
	unsigned int i;
	int num;

	i = 0;

	if (separator == NULL)
		return;

	va_start(all_numbers, n);

	for (; i < n; i++)
	{
		num = va_arg(all_numbers, int);
		printf("%i", num);

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(all_numbers);
}
