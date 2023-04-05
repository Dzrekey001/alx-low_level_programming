#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node a specific index
 * @head: head to the linked list
 * @index: index to delete
 * Return: 1 if successful or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	int count, i;

	count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index != 0)
	{
		previous = *head;
		i = index - 1;

		for (; count < i; count++)
		{
			previous = previous->next;
		}
		if (i == 0)
			previous = *head;
	}
	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}
	current = previous->next;

	if (current == NULL)
		return (-1);

	previous->next = current->next;
	free(current);
	return (1);

}
