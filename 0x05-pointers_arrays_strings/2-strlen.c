#include "main.h"
/**
 * _strlen - check lenght of string
 * @s: pointer to the address of the string
 * Description: a fucntion that returns the
 * of a string.
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int i;
	int _len;

	_len = 0;
	i = 0;

	while ((s + i) != '\0')
	{
		_len += 1;
		i++;
	}
	return (_len);
}
