#include "lists.h"

/**
 * reverse_listint - A function that reverses a linked list.
 *
 * @head: The head of a list.
 *
 * Return: Returns a pointer to the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *yd;

	ptr = NULL;
	yd = NULL;

	while (*head != NULL)
	{
		yd = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = yd;
	}

	*head = ptr;
	return (*head);
}
