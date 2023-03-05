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
	unsigned int a;
	unsigned int b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (!accept[b])
			break;
	}

	return (a);
}
