#include "main.h"
/**
 * _memset - set all memory byte to a constant
 * value
 * @s: pointer to an arrray
 * @b: character for the setting
 * @n: number n byte to be set
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
