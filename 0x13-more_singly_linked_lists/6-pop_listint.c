#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of
 * a linked list and returns the head node data
 *
 * @head: The head of the list.
 *
 * Return: The head node's data.
 */

int pop_listint(listint_t **hd)
{
	int head_node;
	listint_t *t;
	listint_t *rr;

	if (*hd == NULL)
		return (0);

	curr = *hd;

	hnode = rr->n;

	t = rr->next;

	free(rr);

	*hd = t;

	return (head_node);
}
