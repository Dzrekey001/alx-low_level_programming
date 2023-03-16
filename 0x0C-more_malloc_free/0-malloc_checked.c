#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: number of byte to allocate
 * Return: return 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	*t;

	t = malloc(sizeof(b) * b);

	if (t == 0)
	{
		return (98);
	}
	else
	{
		return (t);
	}
}
