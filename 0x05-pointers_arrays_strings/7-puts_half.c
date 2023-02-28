#include "main.h"
/**
 * puts_half - print of a string
 * @str: string pointer parameter
 * Return: Nothing
 */

void puts_half(char *str)
{
	int str_len, i, c;

	str_len = 0;

	for (str_len = 0; str[str_len] != '\0'; str_len++)
	{
		;
	}

	i = (str_len - 1) / 2;

	if (i % 2 == 1)
	{
		_putchar(str[-i]);
	}
	else
	{
		for (c = i + 1; c < str_len; c++)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
