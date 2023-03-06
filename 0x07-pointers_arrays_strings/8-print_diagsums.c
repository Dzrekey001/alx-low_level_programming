#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print two diagonal
 * of a square matix integers
 * @a: pointer to array
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j, b, step;
	int result_1, result_2;


	result_1 = 0;
	result_2 = 0;
	step_plus = 0;
	step_minus = size - 1;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			result_1 += a[i][step_plus];
			step_plus += 1;
			break;
		}
		for (b = size-1; b < size && b !< 0; b--)
		{
			result_2 += a[i][step_minus];
			step_minus -= 1;
			break;
		}	
	}
	printf("%i, %i \n", result_1, result_2);

}
