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

int _strcmp(char *s1, char s2)
{
	int len_s1, len_s2, temp, i;

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
	{
	}
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
	{
	}
	if (len_s1 > len_s2)
	{
		temp = -1;
	}
	else if (len_s1 < len_s2)
	{
		temp = 1;
	}
	else
		for (i = 0; i <= len_s1; i++)
		{
			int n;

			if (s1[i] == s2[i])
			{
				if (i == len_s1)
					temp = 0;
				else
					continue;
			}
		}


}
