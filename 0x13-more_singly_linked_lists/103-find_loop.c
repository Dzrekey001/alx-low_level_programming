#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head t the linked list
 * Return: address of the node where the loop starts, or NULL
 * if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_h = head;
	listint_t *fast_h = head;

	if (!head)
		return (NULL);
	while (slow_h && fast_h && fast_h->next)
	{
		fast_h = fast_h->next->next;
		slow_h = slow_h->next;
		if (fast_h == slow_h)
		{
			slow_h = head;
			while (slow_h != fast_h)
			{
				slow_h = slow_h->next;
				fast_h = fast_h->next;
			}
			return (fast_h);
		}
	}
	return (NULL);
}
