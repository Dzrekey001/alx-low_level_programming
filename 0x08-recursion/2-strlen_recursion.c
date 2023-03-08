#include "main.h"
/**
 * _strlen_recursion - calculate lenght of str
 * @s: string to be countered
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	int s_len;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		s_len + 1;
	}
	return (s_len);
}
