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

	for (i = 0; argv[0][i] != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}
	return (0);
}
