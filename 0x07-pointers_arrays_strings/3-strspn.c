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
	int j = 0;

	i = 0;

	while (s[j] != '\0')
	{
		while (*s++ == *accept++ && *accept != '\0')
		{
			i++;
		}
		j++;
	}
	return (i);
}
