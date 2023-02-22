#include "main.h"

/**
 *_isalpha - check for lowercase character
 *@c: input paremeter
 *Description:  a function that checks for alphabetic character
 * Return: 1 if c is lowercase or 0 if otherwise
 */

int _isalpha(int c)
{
	int j;
	int lower;

	lower = 0;

	for (j = 'a'; j <= 'Z'; j++)
	{
		if (j == c)
			lower = 1;
	}
	return (lower);
}
