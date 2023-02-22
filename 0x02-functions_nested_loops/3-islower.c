#include "main.h"

/**
 *_islower - check for lowercase character
 *@c: input paremeter
 *Description:  a function that checks for lowercase character
 * Return: 1 if c is lowercase or 0 if otherwise
 */

int _islower(int c)
{
	int j;
	int lower;

	lower = 0;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j == c)
			lower = 1;
	}
	return (lower);
}
