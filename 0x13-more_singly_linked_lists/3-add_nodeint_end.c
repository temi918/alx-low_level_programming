#include "lists.h"

/**
 * add_nodeint_end - will add a new node to the end of the list
 *
 * @head: points to the list structure
 *
 * @n: integer for  new node
 *
 * Return: The address of the new element, or NULL on failure.
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *zen, *l;

	zen = malloc(sizeof(listint_t));
	if (zen == NULL)
		return (NULL);

	zen->n = n;
	zen->next = NULL;

	if (*head == NULL)
		*head = zen;

	else
	{
		l = *head;
		while (l->next != NULL)
			l = l->next;
		l->next = zen;
	}

	return (*head);
}
