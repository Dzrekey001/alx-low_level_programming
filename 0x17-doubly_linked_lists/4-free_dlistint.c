#include "lists.h"

/**
 * free_dlistint - frees all linked list
 * @head: head to the linked list
 * Return: Always Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
