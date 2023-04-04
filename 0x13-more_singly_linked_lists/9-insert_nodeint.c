#include "lists.h"

/**
 * insert_nodeint_at_index -  a function that inserts a new
 * node at a given position
 *
 * @head: The head of the list.
 * @idx: The index of the list where the new node should be added
 *
 * @n: integer element.
 *
 * Return: Returns the address of the new node, or NULL if it
 * failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int y;
	listint_t *new;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (y = 0; y < idx - 1 && h != NULL; y++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = h->next;
		h->next = new;
	}

	return (new);
}
