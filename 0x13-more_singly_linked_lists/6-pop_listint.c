#include "lists.h"
/**
 * pop_listint - function that delete head node
 * @head: head to the linked list
 * Return: the data n of the head node
 */

int pop_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (0);

	int n;
	listint_t *temp;

	temp = *head;
	*head = temp->next;

	n = *temp->n;
	free(*temp);
	return (n);

}
