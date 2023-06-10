#include "hash_tables.h"
/**
 * create_hash_node - creates a new hash node
 * @key: key for the node
 * @value: for the node
 * Return: the new node, or NULL on failure
 */

hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - set new entry
 * @ht: pointer to the head of the table
 * @key: key value
 * @value: value to be stored
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *new_value;
	unsigned long int idx;
	hash_node_t *new_node, *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		strlen(key) == 0 || value == NULL || key == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = create_hash_node(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
