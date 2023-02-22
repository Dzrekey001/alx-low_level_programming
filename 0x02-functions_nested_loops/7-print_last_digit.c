#include "main.h"
/**
 * print_last_digit - print last digit
 *
 * @n: input paremeter
 * Description:  a function that prints the last digit of a number
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
		i = (n % 10) * -1;
	else
		i = n % 10;
	_putchar(i + '0');
	return (i);
}
