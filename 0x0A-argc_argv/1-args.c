#include "main.h"
/**
 * main - prints the number of arguments
 * passed into it
 * @argc: total number of argument
 * @argv: argument variables
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argv)
	{
		_putchar((argc - 1) + '0');
	}
	_putchar('\n');
	return (0);
}
