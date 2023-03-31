#include "lists.h"
/**
 * list_len - count number of element in a linked list
 * @h: head of the list
 * Return: number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
