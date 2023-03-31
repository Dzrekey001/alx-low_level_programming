#include "lists.h"
#include <string.h>
/**
 * add_node - add new node to the beginning
 * of a list_t list
 * @head: of list
 * @str: string
 * Return: a point to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int lenght = 0;


	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	while (str[lenght])
		lenght++;

	new_node->len = lenght;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
