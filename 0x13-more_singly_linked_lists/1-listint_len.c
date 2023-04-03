#include <stdio.h>
#include "lists.h"

/**
 *
 * listint_len - returns d number of elements in a linkedint list
 *
 * @r: A pointer to all the listint_t structure
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
