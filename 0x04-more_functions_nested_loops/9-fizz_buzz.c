#include <stdio.h>

/**
 * main - print fizz-Buzz
 * Description: Fizz-Buzz test
 * Return: Alway 0.
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("Buzz\n");
	return (0);
}
