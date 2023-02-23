#include "main.h"
/**
 * _isupper - check if c is upper
 * @c: expected to be a character
 * Description: function that checks for uppercase character
 * Return: 1 if c is upper else 0
 * On error, -1 is returned, and errno is set appropriately.
 */


int _isupper(int c)
{
	int r;

	if ((c > 64) && (c < 91))
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
