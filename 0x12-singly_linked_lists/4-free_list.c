#include "lists.h"
/**
 * free_list - remove list from memory
 * @head: the head to the linked list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
