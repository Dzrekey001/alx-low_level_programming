#include "main.h"
/**
 * _strcpy - copies the string
 * Return: the pointer to dest
 * @dest: buffer
 * @src: string pointed to
 */

char *_strcpy(char *dest, char *src)
{
	char str;

	str = &src;
	dest = str;

	return (*dest);
}
