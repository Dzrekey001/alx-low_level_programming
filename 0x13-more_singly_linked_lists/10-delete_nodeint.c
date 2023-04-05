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
	unsigned int count, i;

	count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index != 0)
	{
		i = index - 1;
		previous = *head;

		for (; count < i; count++)
		{
			previous = previous->next;
			if (!previous || !(previous->next == NULL
					|| index > count + 1))
				return (-1);
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
