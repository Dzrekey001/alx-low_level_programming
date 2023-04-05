#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of listint_t
 * @head: head of linked list
 * @index: index to be returned
 * Return: NULL if node does not exist or return nth data
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;

		if (head == NULL)
			break;
	}
	if (index > i)
		return (NULL);
	else
		return (head);

}
