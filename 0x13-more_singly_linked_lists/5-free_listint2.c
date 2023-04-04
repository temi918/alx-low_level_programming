#include "lists.h"

/**
 * free_listint2 - A function that frees a linked list
 * and sets the head to NULL
 *
 * @head: The head of the list.
 *
 * Return: Returns nithung
 */

void free_listint2(listint_t **head)
{
	listint_t *t;
	listint_t *rr;

	if (head != NULL)
	{
		rr = *head;
		while ((t = rr) != NULL)
		{
			rr = rr->next;
			free(t);
		}
		*head = NULL;
	}
}

