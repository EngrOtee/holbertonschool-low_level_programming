#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to elements of the list
 * Return: 0 if str is null
 */

size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	printf("[%u] %s\n", h->len, h->str);

	if (h->next != NULL)
		return(print_list(h->next) + 1);
	else
		printf("[0] (nil)");
	return (1);

}
