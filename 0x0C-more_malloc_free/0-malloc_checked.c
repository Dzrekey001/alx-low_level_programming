#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: number of byte to allocate
 * Return: return 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);

	if (t == NULL)
	{
		exit(98);
	}
	else
	{
		return (t);
	}
}
