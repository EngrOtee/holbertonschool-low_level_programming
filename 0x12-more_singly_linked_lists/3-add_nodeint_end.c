#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of the list
 * @head: pointer to a pointer to a linked list
 * @n: constant for integer input
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *next;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	next = *head;

	if (next == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (next->next != NULL)
		next = next->next;
	next->next = new_node;
	return (new_node);
}
