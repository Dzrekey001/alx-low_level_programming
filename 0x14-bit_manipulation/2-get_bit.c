#include "main.h"
/**
 * get_bit - checks and return the bit at a given index
 * @n: decimal number to be checked
 * @index: index of the bit to get
 * Return: the value of the bid at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
