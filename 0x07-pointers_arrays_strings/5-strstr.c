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
	int i, j, need_len;

	for (need_len = 0; needle[a] != '\0'; need_len++)
	{
	}

	needle_len = need_len - 1;

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
				needle_len = need_len - 1;
				break;
			}
		}
		if (needle == 0)
			return (haystack[j]);
		else
			return (0);
	}
}
