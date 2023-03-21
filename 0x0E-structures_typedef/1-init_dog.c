#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize variables to struct dog
 * @d: pointer to struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
