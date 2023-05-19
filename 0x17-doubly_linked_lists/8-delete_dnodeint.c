#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at a specified index
 * @head: head of the node
 * @index: if of the targeted node to be deleted
 * Return: -1 on failure, 1 on success
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	dlistint_t *current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}

	current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
