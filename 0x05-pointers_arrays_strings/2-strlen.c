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

	for (*s = 0; *s < sizeof(*s) / sizeof(*s[0]); (*s)++)
	{
		_len++;
	}
	return (_len);
}
