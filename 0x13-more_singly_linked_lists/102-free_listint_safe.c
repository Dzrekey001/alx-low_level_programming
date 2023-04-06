#include "lists.h"
/**
 * free_listint_safe - frees a linked list and sets the head to NULL
 * @h: double pointer to the head of the list
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	listint_t **addresses = NULL;
	size_t i, j, found, count;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h != NULL)
	{
		current = *h;
		found = 0;
		for (count = 0, i = 0; i < count; i++)
		{
			if (current == addresses[i])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			addresses = realloc(addresses, (count + 1) * sizeof(listint_t *));
			if (addresses == NULL)
				exit(98);
			addresses[count] = current;
			temp = current->next;
			free(current);
			count++;
		}
		else
		{
			*h = NULL;
			break;
		}
		*h = temp;
	}
	for (j = 0; j < count; j++)
		addresses[j] = NULL;
	free(addresses);
	*h = NULL;
	return (count);
}
