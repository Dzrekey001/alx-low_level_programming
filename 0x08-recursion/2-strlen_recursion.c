#include "main.h"
/**
 * _strlen_recursion - calculate lenght of str
 * @s: string to be countered
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen-recursion(s + 1));
	}
}
