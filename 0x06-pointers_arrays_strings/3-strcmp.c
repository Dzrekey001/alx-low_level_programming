#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Description: compares two strings and return
 * 0 if s1 and s2 are equal, negative if s1 is
 * less than s2, positive if s1 is greater than s2
 * Return: 0, or -1, or 1
 */

int _strcmp(char *s1, char *s2)
{
	char *str_one = s1;
	char *str_two = s2;

	while (*str_one != '\0' && *str_two != '\0' && *str_one == *str_two)
	{
		str_one++;
		str_two++;
	}
	return (*str_one - *str_two);
}
