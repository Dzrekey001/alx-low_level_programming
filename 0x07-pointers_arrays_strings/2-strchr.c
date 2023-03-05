#include "main.h"
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
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
