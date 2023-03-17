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
	int *t, i;

	if (min > max)
		return (NULL);

	t = malloc(sizeof(*t) * (max - min));

	if (t == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
	{
		t[i] = min++;
	}
	return (t);

}
