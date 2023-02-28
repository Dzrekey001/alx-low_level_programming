#include "main.h"
/**
 * rev_string - reverse string
 * @s: parameter str
 * Return: Nothing
 */
void rev_string(char *s)
{
	int str_len;

	for (str_len = 0; s[str_len] != '\0'; str_len++)
	{
		;
	}

	for (str_len--; str_len >= 0; str_len--)
	{
		_putchar(s[str_len]);
	}
	_putchar('\n');
}
