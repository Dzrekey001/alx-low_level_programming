#include "lists.h"
/**
 * add_nodeint_end - add new node to the end of a linked list
 * @head: head of the linked list
 * @n: value for the n element in the list
 * Return: Null if failed to add
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_end, *tmp;

	if (head != NULL)
	{
		tmp = *head;
		add_end = malloc(sizeof(listint_t));
		if (add_end == NULL)
			return (NULL);

		add_end->n = n;
		add_end->next = NULL;

		if (*head == NULL)
		{
			*head = add_end;
			return (add_end);
		}

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = add_end;
	}
	else
	{
		return (NULL);
	}
	return (add_end);

}
