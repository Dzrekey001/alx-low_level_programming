#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memor for an array
 * @nmemb: elements
 * @size: byte size
 * Return: Null if nmemb or size is 0, else return
 * a pointer to the allicated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	t = malloc(nmemb * size);

	if (t == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		t[i] = 0;
	}
	return (t);
}
