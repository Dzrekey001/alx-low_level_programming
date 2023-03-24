#include "variadic_functions.h"
#include <stdarg.h>
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

	i = 0;

	va_start(all_numbers, n);

	for (; i < n; i++)
	{
		printf("%i", va_arg(all_numbers, int));

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(all_numbers);
}
