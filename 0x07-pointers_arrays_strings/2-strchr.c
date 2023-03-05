#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to be parsed for character
 * @c: character to be located
 * Return: a pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	int j;
	int i;

	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	while (s[j] != '\0')
	{
		if (s[j] == c)
		{
			return (s[i]);
		}
		else if (j < i)
		{
			j++;
			continue;
		}
		else
		{
			return (NULL);
		}

	}

}
