#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of the list
 * @head: pointer to a pointer to a linked list
 * @str: Pointer for a string input
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
		;

	new_node->str = strdup(str);
	new_node->len = len;

	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
