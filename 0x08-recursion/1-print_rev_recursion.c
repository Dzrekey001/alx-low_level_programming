#include "main.h"
/**
 * _print_rev_recursion - print a string in
 * in reverse other
 * @s: string to be reversed
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
