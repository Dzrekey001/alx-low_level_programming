#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
*/

void print_alphabet()
{
	int j;

	for (j = 97; j <= 122; j++)
	{
		putchar(j);
	}
	putchar('\n');
}


int main(void)
{
	print_alphabet();
	return (0);
}
