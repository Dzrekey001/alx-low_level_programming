#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free dog from the heap memory
 * @d: allocated memory
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);

	if ((*d).name != NULL)
		free(d->name);

	if ((*d).owner != NULL)
		free(d->owner);

	free(d);
}

