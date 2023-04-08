#include "main.h"
/**
 * print_binary - print binary representation of a number
 * @n: number to be converted
 * Return: Nothing
 */

void print_binary_1(unsigned long int n)
{
	if (n >= 1)
	{
		print_binary_1(n >> 1);

		_putchar((n & 1) + '0');
	}
}

/**
 * print_binary - print binary representation of a number
 * @n: number to be converted
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else
		print_binary_1(n);
}

