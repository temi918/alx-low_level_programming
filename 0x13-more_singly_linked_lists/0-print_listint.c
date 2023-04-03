#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements in the list
 * @r: A pointer to all list structure
 * Return: the number of all nodes.
 */

size_t print_listint(const listint_t *r)
{
	size_t nd = 0;

	while (r)
	{
		printf("%d\n", r->n);
		r = r->next;
		nd++;
	}
	return (nd);
}
