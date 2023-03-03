#include "main.h"
/**
 * string_toupper - convert string to upper
 * Description: convers all lowercase letter to
 * to uppercase
 * @s: string to be change to uppercase
 * Return: character
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
