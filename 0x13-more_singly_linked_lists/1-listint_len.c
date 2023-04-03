#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of all elements in a list
 *
 * @r: A pointer to listint_t structure
 *
 * Return: the number of all elements.
 */

size_t listint_len(const listint_t *r)
{
	size_t nd = 0;

	while (r)
	{
		r = r->next;
		nd++;
	}
	return (nd);
}
