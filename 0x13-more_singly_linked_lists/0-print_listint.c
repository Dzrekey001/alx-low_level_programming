#include "lists.h"
#include "stdio.h"

/**
 * print_listint - print element in a linked list 
 * @h: header to the linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	size_t len;

	tmp = h;

	while (tmp->next != NULL)
	{
		printf("%i",tmp->n);
		len++;
	}
	return len;
}

