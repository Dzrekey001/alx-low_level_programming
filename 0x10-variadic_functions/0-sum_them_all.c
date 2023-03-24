#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all argument
 * @n: intial number
 * Return: total sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int result;

	int i = 0;

	result = 0;

	if (n == 0)
		return (0);

	va_list all_arguments;

	va_start(all_arguments, n);

	while (i < n)
	{
		result += va_arg(all_arguments, int);
		i++;
	}
	va_end(all_arguments);
}
