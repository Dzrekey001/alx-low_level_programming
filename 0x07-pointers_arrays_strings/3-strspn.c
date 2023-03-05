#include "main.h"
/**
 * _strspn- gets the length of a prefix
 * prefix substring
 * @s: string to be parsed for comparation
 * @accept: string to be compared to
 * Return: numbero of bytes in the initial
 * segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		while (*s++ == *accept++)
		{
			i++;
		}
		if (!(*accept))
		{
			break;
		}
	}
	return (i);
}
