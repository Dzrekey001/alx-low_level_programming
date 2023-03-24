#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - print strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: Null if separator is NULL, or Nil if one string is
 * Null
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_list;
	unsigned int i;
	char *str;

	va_start(str_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(str_list, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str_list);


}
