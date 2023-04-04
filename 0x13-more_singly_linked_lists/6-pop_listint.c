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
	listint_t *curr;

	if (*hd == NULL)
		return (0);

	curr = *hd;

	head_node = curr->n;

	h = curr->next;

	free(curr);

	*hd = h;

	return (head_node);
}
