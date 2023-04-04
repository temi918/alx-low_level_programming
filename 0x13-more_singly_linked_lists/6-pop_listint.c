#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of
 * a listint_t linked list and returns the head nodes data(n)
 *
 * @hd: head of a list.
 *
 * Return: Returns the head node's data.
 */

int pop_listint(listint_t **hd)
{
	int head_node;
	listint_t *h;
	listint_t *rr;

	if (*hd == NULL)
		return (0);

	rr = *hd;

	head_node = rr->n;

	h = rr->next;

	free(rr);

	*hd = h;

	return (head_node);
}
