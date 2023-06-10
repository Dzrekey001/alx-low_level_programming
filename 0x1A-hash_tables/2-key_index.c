#include "hash_tables.h"
/**
 * key_index - calculate the key_index
 * @key: key to be hashed
 * @size: size of the array
 * Return: the hashed index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
