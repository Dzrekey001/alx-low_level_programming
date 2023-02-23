#include <stdio.h>
/**
 * main - compute the higherst prime factor a number
 * Description:  a program that prints the largest prime factor
 * Return: Always 0
 */

int main(void)
{
	long int n, test, prime, check;

	n = 612852475143;
	check = 0;
	while (check == 0)
	{
		for (prime = 2; prime <= (n - 1); prime++)
		{
			test = n % prime;
			if (test == 0)
			{
				break;
			}
		}
		if (test == 0)
		{
			n = n / prime;
		}
		else
		{
			check = 1;
		}

	}
	printf("%li\n", n);
	return (0);
}
