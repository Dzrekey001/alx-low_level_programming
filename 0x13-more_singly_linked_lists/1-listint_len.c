#include "lists.h"

/**
 * listint_len - return number of element in a linked list
 * @h: head to the linked list
 * Return: total number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
