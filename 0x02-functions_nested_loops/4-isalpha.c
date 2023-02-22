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
	int upper_c;
	int lower_c;

	j = 0;

	for (lower_c = 'a'; lower_c <= 'z'; lower_c++)
	{
		for (upper_c = 'A'; upper_c <= 'Z'; upper_c++)
		{
			if (lower_c || upper_c)
				j = 1;
		}
	}
	return (j);
}
