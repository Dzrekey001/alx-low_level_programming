#include "main.h"
/**
 * _isdigit - check if c is a digit
 * @c: character to check
 * Return: 1 if c is a digit else 0
 */

int _isdigit(int c)
{
	int i;
	int r;

	for(i = '0'; i <= '9'; i++)
	{
		if (i == c)
		{
			r = 1;
			break;
		}
		else
		{
			r = 0;
			continue;
		}
	}
	_putchar('\n');
	return (r);	
}
