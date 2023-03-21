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
		printf("Name: (nil)");
	if ((*d).owner == NULL)
		printf("Owner: (nil)");

	if (d != NULL)
	{
		printf("Name: %s", (*d).name);
		printf("Age: %f", (*d).age);
		printf("Owner: %s", (*d).owner);
	}
	else
	{
		return;
	}



}

