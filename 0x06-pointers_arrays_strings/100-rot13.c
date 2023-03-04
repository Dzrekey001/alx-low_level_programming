#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 * Return: s
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != 0 && (s[i] >= 'a' && s[i] <= 'z') ||
			(s[i] >= 'A' && s[i] <= 'Z'); i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'm') ||
				(s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] += 13;
		}
		else
		{
			s[i] -= 13;
		}
	}
	return (s);
}
