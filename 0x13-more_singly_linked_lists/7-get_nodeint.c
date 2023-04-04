#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of a linked list
 * where index is the index of the node, starting at zero
 *
 * @hd: The head of the list
 *
 * @in: The index of the node.
 *
 * Return: Returns the nth node. If the node does not exist, returns NULL.
 */

listint_t *get_nodeint_at_index(listint_t *hd, unsigned int in)
{
	unsigned int i;

	for (i = 0; i < in && hd != NULL; i++)
	{
		hd = hd->next;
	}

	return (hd);
}
