#include <stdio.h>
#include "lists.h"

/**
 * 0-print_listint.c - would print all elements of a listint_t list
 *
 * @q: a pointer to listint
 *
 *
 * Return: total number of nodes
 */

size_t print_listint(const listint_t *q)
{
	size_t nd = 0;

	while (q)
	{
		printf("%d\n", q->n);
		q = q->next;
		nd++;
	}
	return (nd);
}
