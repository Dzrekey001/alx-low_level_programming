#include "lists.h"
/**
 * free_listint - free listint_t
 * @head: head to the linked list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
