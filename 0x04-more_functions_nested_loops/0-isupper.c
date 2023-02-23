#include "main.h"
/**
 * main - check if c is upper
 * @c: expected to be a character 
 * Return: 1 if c is upper else 0
 */
int _isupper(int c)
{
	int i;
	int r;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			r = 1;
		else
			r = 0;
	}
}
