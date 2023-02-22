#include "main.h"
/**
 * _abs - print absolute value of an integer
 * @n: input paremeter
 * Description: a function that computes the absolute value of an integer
 * Return: Always 0.
 */

int _abs(int n)
{
	int i;

	if (n > 0)
		i = n;
	else
		i = n * -1;
	return (i);
}
