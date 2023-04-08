#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get
 * one number to another
 * @n: value to be fliped
 * @m: targeted number to be fliped to
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask, bits;

	mask = n ^ m;
	bits = 0;

	while (mask > 0)
	{
		bits += (mask & 1);
		mask >>= 1;
	}
	return (bits);
}
