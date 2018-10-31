#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at a certain index
 * @head: pointer to the head of the node
 * @idx: Index of the node
 * @n: Value of input
 * Return: Always 0.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *old, *new;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	new->next = (*head)->next;
	old = *head;

	for (i = 0; i < idx; i++)
	{
		old = old->next;
		if (old == NULL)
		{
			free(new);
			return (NULL);
		}
		if (i != idx - 1)
		{
			free(new);
			return (NULL);
		}
	}
	new->n = n;
	new->next = old->next;
	old->next = new;
	return (new);
}
