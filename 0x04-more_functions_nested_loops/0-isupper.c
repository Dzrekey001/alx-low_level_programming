#include "main.h"
/**
 * _isupper - check if c is upper
 * @c: expected to be a character
 * Description: function that checks for uppercase character
 * Return: 1 if c is upper else 0
 */
int _isupper(int c)
{
	int r;

	if (c >= 'A' || c <= 'Z')
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	_putchar('\n');
	return (r);
}
