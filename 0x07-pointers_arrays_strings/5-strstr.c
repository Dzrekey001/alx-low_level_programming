#include "main.h"
/**
 * _strstr - finds a substring within a string
 * @haystack: string to parse for substring
 * @needle: substring to search for
 * Return: pointer to the first occurrence in
 * string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, n_len;

	for (n_len = 0; needle[n_len] != '\0'; n_len++)
	{
	}

	needle_len = n_len - 1;

	for (j = 0; haystack[j] != '\0'; j++)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[j++] == needle[i])
			{
				needle_len--;
			}
			if (needle_len != 0)
			{
				needle_len = n_len - 1;
				break;
			}
		}
		if (needle == 0)
			return (j);
		else
			return (0);
	}
}
