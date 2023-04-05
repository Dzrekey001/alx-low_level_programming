#include "lists.h"

/**
 * free_listp2 - a function that frees a linked list
 * @head: head of a linked list
 * Return: no return.
 */
void free_list_in(listp_t **head)
{
	listp_t *temp, temp2;

	if (head != NULL)
	{
		temp2 = *head;
		while ((temp = temp2) != NULL)
		{
			temp2 = temp2->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t n_nodes = 0;
	listp_t *hptr, *new, *add;
	listint_t *current;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_list_in(&hptr);
				return (n_nodes);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		n_nodes++;
	}

	*h = NULL;
	free_list_in(&hptr);
	return (n_nodes);
}
