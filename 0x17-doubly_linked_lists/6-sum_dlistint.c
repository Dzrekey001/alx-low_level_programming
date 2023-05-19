#include "lists.h"
/**
 * sum_dlistint - sum the values in a linked list
 * @head: head of the linked list
 * Return: 0 if list is empty, or the sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
