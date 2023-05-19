#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/**
 * main - main funtions
 * @argc: argument count
 * @argv: argument variables
 * Return: 1 on failure, 0 on success
 */

int main(int argc, char *argv[])
{
	unsigned char max_char;
	unsigned int i, b, sum_squares, rand_iterations;
	size_t len, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}

	len = strlen(argv[1]);
	p[0] = l[(len ^ 59) & 63];
	for (i = 0, add = 0; i < len; i++)
		add += (unsigned char)argv[1][i];

	p[1] = l[(add ^ 79) & 63];
	for (i = 0, b = 1; i < len; i++)
		b *= (unsigned char)argv[1][i];

	p[2] = l[(b ^ 85) & 63];
	max_char = (unsigned char)argv[1][0];
	for (i = 0; i < len; i++)
	{
		if ((unsigned char)argv[1][i] >= max_char)
			max_char = (unsigned char)argv[1][i];
	}
	srand(max_char ^ 14);
	p[3] = l[rand() & 63];
	sum_squares = 0;
	for (i = 0; i < len; i++)
		sum_squares += (unsigned char)argv[1][i] * (unsigned char)argv[1][i];
	p[4] = l[(sum_squares ^ 239) & 63];
	rand_iterations = 0;
	for (i = 0; i < (unsigned char)argv[1][0]; i++)
		rand_iterations = rand();
	p[5] = l[(rand_iterations ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
