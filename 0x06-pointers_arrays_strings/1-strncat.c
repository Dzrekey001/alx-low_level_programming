#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string to be added to
 * @src: string to be added
 * @n: the nth character
 * Description: concatenating two strings with to the
 * nth source
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	dest_len, i;

	for (dest_len = 0; *dest++ != '\0'; dest_len++)
	{
	}
	for (i = 0; *src != '\0' && i < n; i++, dest_len++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}
