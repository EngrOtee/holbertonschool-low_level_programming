#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: Pointer to the head node of the linked list
 * @index: The index of the node
 * Return: The nth node of a linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *next;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	next = head;

	for (i = 0; i < index; i++)
	{
		if (next == NULL)
			return (NULL);
		next = next->next;
	}
	return (next);
}
