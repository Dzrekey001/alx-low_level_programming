#include <stdlib.h>
#include "main.h"

/**
 * _trans - transfer string from s1 to s2
 * @t: pointer to the allocated memory
 * @str2_len: lenght of string 2
 * @str_size: total string size
 * @s1: string 1
 * @s2: string 2
 * Return: nothing
 */

void _trans(*t, int str_size, int str2_len, char s1, char s2)
{
	int i, j;

	i = 0;
	j = 0;
	if (s1  == "")
	{
		t[0] = "";
	}
	else
	{
		while (i < str_size)
		{
			t[i] = s1[i];
			i++;
		}
		if (s2 == "")
		{
			t[i] = "";
		}
		else
		{
			while (i < str2_len)
			{
				t[i] = s2[j];
				j++;
				i++;
			}
			t[i + 1] = '\0';
		}
}
/**
 * _strlen - return lenght of string
 * @s: string to be countered
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[i] != '\0')
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
	int str1_len, str2_len;

	str1_len = _strlen(s1);
	str2_len = _strlen(s2);
	str_size = str1_len + str2_len;

	t = malloc(sizeof(char) * (str_size + 1));

	if (t == NULL)
	{
		return (NULL);
	}
	else
	{
		if (s1  == "")
		{
			t[0] = "";
		}
		_trans(t, str_size, str2_len, s1, s2);
	}
	return (t);
}
