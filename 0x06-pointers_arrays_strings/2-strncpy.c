#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: string to be attached
 * @src: string to copy
 * @n: the nth number of src
 * Description: copies a string to the nth number
 * of src
 * Return: dest
 */
char *_strcpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
