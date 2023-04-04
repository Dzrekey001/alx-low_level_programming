#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * of a linked list
 * @head: pointer to the head of the list
 * @n: new value to be assigned to n
 * Return: NULL if adding node fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	if (head != NULL)
	{
		add = malloc(sizeof(listint_t));
		if (add == NULL)
			return (NULL);

		add->n = n;

		add->next = *head;
		*head = add;

	}
	else
	{
		return (NULL);
	}
	return (add);

}
