#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argv: array of values
 * @argc: total number of arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int a, b;
	int result;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
