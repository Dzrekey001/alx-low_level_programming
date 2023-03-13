#include <stdlib.h>
#include "main.h"
/**
 * _strdup - return a pointer to newly allocated
 * space in memory
 * @str: string to be compied to the new allocation
 * Return: a pointer to new string ir Null if string is Null
 */

char *_strdup(char *str)
{
	char *t;
	int i, str_len;

	i = 0;
	str_len = 0;

	while (str[str_len] != '\0')
	{
		str_len++;
	}

	t = malloc(sizeof(char) * (str_len + 1));

	if (str == NULL || t == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[i] != '\0')
		{
			t[i] = str[i];
		}
		t[i] = '\0';
		return (t);
	}
}
