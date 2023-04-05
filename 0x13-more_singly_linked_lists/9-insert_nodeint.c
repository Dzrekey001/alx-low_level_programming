#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node a specific
 * index
 * @head: head of the linked list
 * @idx: indext of the list wher the new node should be added
 * @n: data for the new node
 * Return: address of new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *add;
	unsigned int count;

	count = 0;

	if (head == NULL)
		return (NULL);

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;
	if (idx != 0)
	{
		temp = *head;

		for (count = 1; count < idx; count++)
		{
			temp = temp->next;
			if (temp == NULL)
				break;
		}
	if (idx > count)
		return (NULL);
	}
	if (idx == 0)
	{
		add->next = *head;
		*head = add;
		return (add);
	}
	add->next = temp->next;
	temp->next = add;
	return (add);
}
