#include "main.h"
/**
 * print_rev - reverse string
 * @s: parameter str
 * Return: Nothing
 */
void print_rev(char *s)
{
	int str_len;

	for (str_len = 0; s[str_len] != '\0'; str_len++)
	{
		;
	}

	for (str_len = str_len - 1; str_len >= 0; str_len--)
	{
		_putchar(s[str_len]);
	}
	_putchar('\n');
}
