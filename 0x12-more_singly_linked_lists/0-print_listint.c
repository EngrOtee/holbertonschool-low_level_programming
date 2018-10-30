#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a list_t list
 * @h: Pointer to elements of the list
 * Return: 0 if str is null
 */

size_t print_listint(const listint_t *h)
{
	int count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
