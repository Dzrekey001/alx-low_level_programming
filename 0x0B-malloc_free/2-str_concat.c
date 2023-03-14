#include <stdlib.h>
#include "main.h"
/**
 * _strlen - return lenght of string
 * @s: string to be countered
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * str_concat - return a pointer to two contatenated
 * string in memory
 * @s1: first string
 * @s2: second string
 * Return: NULL is passed return empty str,
 * else return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *t;

	if (s1 == NULL || s2 == NULL)
	{
		if (s1)
			s1 = "";
		else
			s2 = "";
	}

	t_len = _strlen(s1) + _strlen(s2);
	t = malloc(sizeof(char) * (t_len + 1));

	if (t == 0)
	{
		return (NULL);
	}


	i = 0;

	for (; i < _strlen(s1); i++)
	{
		t[i] = s1[i];
	}
	for (j = 0; j < _strlen(s2); j++)
	{
		t[i] = s2[j];
		i++;
	}
	return (t);
}
