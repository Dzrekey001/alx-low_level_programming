#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 97;

	while (i <= 122)
	{	char i;

		if (i != 101 || i != 113)

			putchar(i);
	}
	putchar('\n');
	return (0);
}
