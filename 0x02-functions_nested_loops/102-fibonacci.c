#include <stdio.h>

/**
 * main - print fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	long int fibbo[50];

	fibbo[0] = 1;
	fibbo[1] = 2;


	printf("%ld, %ld, ", fibbo[0], fibbo[1]);

	for (i = 2; i < 50; i++)
	{
		fibbo[i] = fibbo[i - 1] + fibbo[i - 2];

		if (i == 49)
			printf("%ld\n", fibbo[i]);
		else
			printf("%ld, ", fibbo[i]);
	}
	return (0);
}
