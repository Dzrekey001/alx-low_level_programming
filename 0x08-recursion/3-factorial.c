#include "main.h"
/**
 * factorial - calculate fatorial of a given number
 * @n: given number
 * Return: -1 if n is lower than 0, factorial 0 return 1
 * or return factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
