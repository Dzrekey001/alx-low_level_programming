#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: array containing integers
 * @size: size of array
 * @cmp: function that search for an element
 * Return: The index of the first element for which the cmp function
 * does not return 0, -1, if no elements matches or size <=0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	if (i == size)
		return (-1);
	return (-1);
}
