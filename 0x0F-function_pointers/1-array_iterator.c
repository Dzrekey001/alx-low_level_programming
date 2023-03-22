#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes functions given as parameter
 * @array: array of elements
 * @size: size of element
 * @action: function to ve executed
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL || size < 0)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
