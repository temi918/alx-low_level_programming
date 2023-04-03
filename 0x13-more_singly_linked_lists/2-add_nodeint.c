#include "lists.h"
#include <string.h>

/**
 * add_nodeint - will add a new node at the beginning
 * of a  listint_t
 *
 * @head: This is the head of the list
 *
 * @n: n element for integer
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *zen;

	zen = malloc(sizeof(listint_t));
	if (zen == NULL)
		return (NULL);
	zen->n = n;
	zen->next = *head;
	*head = zen;

	return (*head);
}
