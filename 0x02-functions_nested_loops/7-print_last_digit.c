#include "main.h"
/**
 * print_last_digit - print last digit
 *
 * @n: input paremeter
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
		i = (n % 10) * -1;
	else
		i = n % 10;
	_putchar(i);
	return (i);
}
