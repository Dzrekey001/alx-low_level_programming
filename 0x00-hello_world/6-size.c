#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float e;

	printf("Size of a char: %s byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a int: %d byte(s)\n",(unsigned long)sizeof(a));
	printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %f byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
