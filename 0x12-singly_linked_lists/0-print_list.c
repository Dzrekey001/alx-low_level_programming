#include "lists.h"
/**
 * print_list - print the content of list_t
 * @h: pointer to the content of element
 * Return:  the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;
		nodes++;
	}
	return (nodes);
}
