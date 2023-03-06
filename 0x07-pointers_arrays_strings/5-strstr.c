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
	int i, j;

	while (*haystack++ != '\0')
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			for (i = 0; needle[i] != '\0'; i++)
			{
				if (needle[i] == haystack[j])
				{
					continue;
				}
			}
			if (needle[i] == '\0')
			{
				return (j);
			}
			else
		}
		return (0);
	}
}
