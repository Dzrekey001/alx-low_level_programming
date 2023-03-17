#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of intergers
 * @min: minimum range
 * @max: maximum range
 * Return: NULL, if mallic fails, if min>max
 */
int *array_range(int min, int max)
{
	int *t;
	int i, dif;

	if (min > max)
		return (NULL);

	dif = max - min;

	t = malloc(sizeof(int) * (dif + 1));

	if (t == NULL)
		return (NULL);

	for (i = 0; i <= dif; i++)
	{
		t[i] = min++;
	}
	return (t);

}
