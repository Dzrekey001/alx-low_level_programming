#include "main.h"
/**
 * puts2 - print every other character of a string
 * @str: parameter string
 * Return: Nothing
 */

void puts2(char *str)
{
	int c, str_len;

	str_len = 0;

	for (str_len = 0; str != '\0'; str_len++)
	{
		;
	}
	_putchar(s[0]);

	for (c = 1; c < str_len; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(s[c]);
		}
	}
	_putchar('\n');
}
