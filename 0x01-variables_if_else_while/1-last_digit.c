#include <stdlib.h>
#include <time.h>
#include <sdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 20) == 0)
		printf("%d is positive", n);
	else
		printf("%d is negative", n);

	return (0);
}
