#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print the details of dog
 * @d: pointer to dog declaration
 * Return: Nil if element in d is Null, nothing if d
 * if Null
 */

void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
		printf("Name: (nil)\n");
	if ((*d).owner == NULL)
		printf("Owner: (nil)\n");

	if (d != NULL)
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
	else
	{
		return;
	}



}

