#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int i;
	int b;

	i = 97;
	b = 65;

	while (i <= 122)
	{

		char i;

		putchar(i);

		i++;
	}
	while (b <= 90)
	{
		char i;

		putchar(i);

		b++;
	}

	putchar('\n');

	return (0);
}
