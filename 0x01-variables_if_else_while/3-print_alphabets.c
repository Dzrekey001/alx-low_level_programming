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

		char a;

		a = i;

		putchar(a);

		i++;
	}
	while (b <= 90)
	{
		char a;

		a = b;

		putchar(a);

		b++;
	}

	putchar('\n');

	return (0);
}
