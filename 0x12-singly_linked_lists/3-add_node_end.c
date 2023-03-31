#include "lists.h"
#include <string.h>
/**
 * add_node_end - add a new node of the end of linked
 * list
 * @head: head of the list
 * @str: string to be add
 * Return: address to end node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end_node, *temp;
	int lenght = 0;

	new_end_node = malloc(sizeof(list_t));

	if (new_end_node == NULL)
		return (NULL);

	while (str[lenght])
		lenght++;

	new_end_node->len = lenght;
	new_end_node->str = strdup(str);

	if (*head == NULL)
	{
		new_end_node->next = *head;
		*head = new_end_node;
	}
	else
	{
		new_end_node->next = NULL;
		temp = *head;

		while (temp->next)
			temp = temp->next;
		temp->next = new_end_node;
	}
	return (new_end_node);
}
