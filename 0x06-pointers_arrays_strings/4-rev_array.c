#include "main.h"
/**
 * reverse_array - reverse contentof an array
 * @a: pointer to array to be reversed
 * @n: number of element in array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n--)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n] = temp;
	}
}
