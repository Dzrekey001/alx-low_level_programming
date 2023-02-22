#include "main.h"
/**
 *print_sign - print sign numbers
 *@n: function paremeter
 *Return: 1 if n is greater than zero,0 if zero, -1 if less than zero
 */

int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		_putchar('+');
		r = 1;
	}

	else if (n == 0)
	{
		_putchar('0');
		r = 0;
	}
	else
	{	_putchar('-');
		r = -1;
	}
	return (r);
}
