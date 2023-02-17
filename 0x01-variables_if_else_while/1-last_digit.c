#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int i;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;

	if (i > 5)
		printf("The last digit of %d is %d and is greater than 5", n, i);
	else if (i < 6)
		printf("The last digit of %d is %d and is less than 6 and not 0", n, i);
	else
		printf("The last digit of %d is %d and is zero", n, i);

	return (0);
}
