#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: argument values
 * Return: 0 if no value passed, Error when
 * some value are not int and return 1
 */

int main(int argc, char *argv[])
{
	int result, j, i;

	result = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
		result = result + atoi(argv[i]);
	}
	printf("%i\n", result);
	return (0);
}
