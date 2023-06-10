#include "hash_tables.h"
/**
 * hash_table_get - get a value from the table
 * @key: key to find the hash table
 * @ht: pointer to the head of the table
 * Return: the value of for the hash table using the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;

	if (ht->size == 0 || ht == NULL || strlen(key) == 0
		|| key == NULL || ht->array == NULL)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);

	node = ht->array[idx];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
