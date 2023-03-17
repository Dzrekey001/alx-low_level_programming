#include "main.h"
#include <stdlib.h>
/**
 * _len - return lenght of str
 * @c: string to be countered
 * Return: lenght of string
 */

int _len(char *c)
{
	unsigned int i;

	for (i = 0; c[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * string_nconcat - concates two string
 * @s1: string 1
 * @s2: string 2
 * @n: number of s2 to be copied
 * Return: return Null if function fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int len_1, len_2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_1 = _len(s1);
	len_2 = _len(s2);

	if (!(n > len_2))
	{
		len_2 = n;
	}

	t = malloc(sizeof(char) * (len_2 + len_1 + 1));

	if (t == NULL)
	{
		return (NULL);
	}
	else
	{
		unsigned int i, j;

		for (i = 0; i < len_1; i++)
		{
			t[i] = s1[i];
		}
		for (j = 0; j < len_2; j++)
		{
			t[i] = s2[j];
			i++;
		}
		t[i] = '\0';
	}
	return (t);


}
