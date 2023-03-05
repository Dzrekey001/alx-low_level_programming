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
	unsigned int i;

	a = 0;
	i = 0;

	while (s[a] != 0)
	{
		if (s[a] == accept[a])
		{
			i++;
		}
		if (accept[++a] == '\0')
		{
			break;
		}
		else
		{
			a++;
		}
	return (i);
}
