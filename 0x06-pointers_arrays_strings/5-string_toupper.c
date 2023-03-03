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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			*(str + i) = str[i] - 32;
		}
		else
		{
			;
		}
		return (str);
	}
}
