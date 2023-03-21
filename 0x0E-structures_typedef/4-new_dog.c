#include "dog.h"
#include <stdio.h>
/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner
 * Return: NULL if the functions fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_d;

	(*new_d).name = name;
	(*new_d).age = age;
	(*new_d).owner = owner;

}
