#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string to be appended to
 * @src: source string to be appended
 * Return: dest
 * Description: a function that contenates src string
 * to dest string
 */

char *_strcat(char *dest, char *src)
{
	int dest_len, i;

	while (*dest++ != '\0')
	{
	}
	for (i = 0; src[i] != '\n'; i++, dest_len++)
	{
		dest[dest_len] = src[i];
	}
	return (dest);
}
