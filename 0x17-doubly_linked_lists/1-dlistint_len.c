#include "lists.h"
/**
 * dlistint_len - check the number of elements in dlistint_t list
 * @h: head to the dlistint_t list
 * Return: the numbers of element in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_elements;

	num_elements = 0;

	if (h == NULL)
		return (0);
	do {
		if (h->n)
			num_elements++;
		h = h->next;
	} while (h != NULL);
	return (num_elements);
}
