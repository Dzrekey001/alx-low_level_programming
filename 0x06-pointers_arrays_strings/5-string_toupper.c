#include "main.h"
/**
 * string_toupper - convert string to upper
 * Description: convers all lowercase letter to
 * to uppercase
 * @str: string to be change to uppercase
 * Return: character
 */

char *string_toupper(char *str)
{
	int i;
	int len_str;

	for (len_str = 0; str[len_str] != '\0'; len_str++)
	{
	}
	for (i = 0; i < len_str; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			continue;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			*(str + i) = str[i] - 32;
		}
		else
		{
			continue;
		}
		return (str);
	}
}
