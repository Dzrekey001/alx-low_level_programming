#include "lists.h"

/**
 * reverse_listint - functin that reverses a listint_t of a linked list
 * @head: pointer to the head of linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	temp = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = next;
	}
	*head = temp;
	return (*head);
}
