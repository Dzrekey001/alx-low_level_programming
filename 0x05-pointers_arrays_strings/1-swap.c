#include "main.h"
/**
 * swap_int - swap the values of two int
 * @a: value a
 * @b: value b
 * Description: swap the values of two int
 * directly from memory
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}
