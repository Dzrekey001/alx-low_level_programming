#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner
 * Return: NULL if the functions fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	char cp_name, cp_owner;
	int len_name = 0, len_owner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);

	cp_name = malloc(len_name + 1);

	if (cp_name == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		cp_name[i] = name[i];
	cp_name[i] = '\0';

	cp_owner = malloc(len_owner + 1);

	if (cp_owner == NULL)
		return (NULL);

	for (i = 0; owner[i]; i++)
		cp_owner[i] = owner[i];
	cp_owner[j] = '\0';

	(*new_d).name = cp_name;
	(*new_d).age = age;
	(*new_d).owner = cp_owner;

	return (new_d);
}
