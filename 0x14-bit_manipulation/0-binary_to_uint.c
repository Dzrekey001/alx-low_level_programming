#include "main.h"
#include <math.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: 0 if a character in b is not 0 or 1, of if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base_10;
	int len, base_2;


	if (b == NULL)
		return (0);

	base_10 = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	len = len - 1;

	for (base_2 = 1; len >= 0; len--, base_2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] & 1)
		{
			base_10 += base_2;
		}
	}
	return (base_10);
}
