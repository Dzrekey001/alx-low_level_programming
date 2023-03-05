#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string to be parsed for character
 * @c: character to be located
 * Return: a pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (c == *s)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
