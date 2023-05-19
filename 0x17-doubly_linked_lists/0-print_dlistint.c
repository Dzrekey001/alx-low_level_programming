#include "lists.h"
/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: head to dlistint_t list
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t total_node;

	total_node = 0;

	if (h == NULL)
		return (0);
	do {
		total_node++;
		printf("%d\n", h->n);
		h = h->next;
	} while (h != NULL);

	return (total_node);
}
