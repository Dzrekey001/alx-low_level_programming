#include "main.h"
/**
 * _strpbrk - searches for any of a set of bytes
 * @s: string to parsed for first occurrence of
 * of any of the byte in string accept.
 * @accept: accept string
 * Return: a pointer to the first occurrence of s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (*s);
			}
		}
		s++;
	}
	return (0);

}
