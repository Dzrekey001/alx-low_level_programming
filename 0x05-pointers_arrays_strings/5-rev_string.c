#include "main.h"
/**
 * rev_string - reverse string
 * @s: parameter str
 * Return: Nothing
 */
void rev_string(char *s)
{
	int str_len;
	int i, a;

	for (str_len = 0; s[str_len] != '\0'; str_len++)
	{
		;
	}

	for (str_len--, i = 0; str_len >= 0 && i < str_len; str_len--, i++)
	{
		a = s[i];
		s[i] = s[str_len];
		s[str_len] = a;
	}
}
