#include <main.h>

/**
 *print_alphabet - print char
 *main - check the code
 *
 * Return: Always 0.
*/

void print_alphabet(void)
{
	int j;

	for (j = 97; j <= 122; j++)
		_putchar(j);
	}
	_putchar('\n');
}


int main(void)
{
	print_alphabet();
	return (0);
}
