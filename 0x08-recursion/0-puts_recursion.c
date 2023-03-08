#include "main.h"
/**
 * _puts_recursion - pirnts a string using
 * recursion
 * @s: string character to be printed
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

}
