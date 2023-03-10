#include "main.h"
/**
 * main - print all argiments it receives
 * @argc: number of arguments
 * @argv: argument values
 * Return: Always 0 (Succes)
 */

int main(int argc, char *argv[])
{
	int i, j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			_putchar(argv[i][j]);
		}
		_putchar('\n');
	}
	return (0);
}
