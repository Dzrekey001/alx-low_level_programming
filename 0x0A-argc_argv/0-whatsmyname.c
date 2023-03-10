#include "main.h"
/**
 * main - prints name of the program
 * @argc: total argument
 * @argv: array of variable
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (argv[0] && argv[0][i] != '\0')
	{
		_putchar(argv[0][i++]);
	}
	_putchar('\n');
	return (0);
}
