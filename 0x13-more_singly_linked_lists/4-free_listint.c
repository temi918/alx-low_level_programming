#include "lists.h"

/**
 * free_listint - will free a list_t  list
 *
 * @head: points to listint_t structure
 *
 * Return: Nothing
 *
 */

void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head;
		head = head->next;
		free(t);
	}
	free(head);
}
