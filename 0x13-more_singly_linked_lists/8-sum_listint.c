#include "lists.h"
/**
 * sum_listint - calculate all the sum of data(n)
 * of a listitn_t linked list
 * @head: head of the linked list
 * Return: zero if list is empty or the sum of data(n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
