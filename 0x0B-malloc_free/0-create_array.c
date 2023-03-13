#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: array size
 * @c: character for initialization
 * Return: Null if size is 0, Null if it fails,
 */

char *create_array(unsigned int size, char c)
{
	int *t, i;

	i = 0;

	t = malloc(sizeof(char) * size);

	if (t == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			t[i] = c;
			i++;
		}
		return (t);
	}

