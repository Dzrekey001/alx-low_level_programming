#include "main.h"
/**
 * _pow_recursion - calculate x raised to the power of y
 * @x: based number
 * @y: power number
 * Return: -1 if y is lower than 0 esle return x raised
 * to the power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
