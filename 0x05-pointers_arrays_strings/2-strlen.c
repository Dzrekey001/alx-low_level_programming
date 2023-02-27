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

	for (i = 0; i < sizeof(*s) / sizeof(*s[0]); i++)
	{
		_len++;
	}
	return (_len);
}
