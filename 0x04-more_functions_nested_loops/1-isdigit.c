#include "main.h"
/**
 * _isdigit - check if c is a digit
 * @c: character to check
 * Description: a function that checks for a digit (0 through 9).
 * Return: 1 if c is a digit else 0
 */

int _isdigit(int c)
{
	int i;

	if (c >= 48 && c <= 57)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
