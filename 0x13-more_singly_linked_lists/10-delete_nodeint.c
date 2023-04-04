#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - It deletes the node at a specified index from list
 *
 * @head: The pointer to the listint_t structure
 *
 * @index: The index of the node to be deleted
 *
 * Return: Returns 1 if succeeded, or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t, *delete_node;
	unsigned int x = 1;

	if (*head == NULL)
		return (-1);

	t = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
	}
	else
	{
		while (x < index)
		{
			t = t->next;
			if (t == NULL)
				return (-1);
			x++;
		}
		delete_node = t;
		delete_node = delete_node->next;
		t->next = delete_node->next;
		free(delete_node);
	}
	return (1);
}
