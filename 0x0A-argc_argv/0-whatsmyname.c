#include "main.h"
/**
 * main - prints name of the program
 * @argc: total argument
 * @argv: array of variable
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, a;

	a = argc - argc;
	i = 0;

	while (argv[a] && argv[a][i] != '\0')
	{
		_putchar(argv[a][i++]);
	}
	_putchar('\n');
	return (0);
}
