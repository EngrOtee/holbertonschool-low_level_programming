#include "lists.h"

/**
 * free_list - Frees a list
 * @head: pointer to the beginning of the list
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *list = NULL;

	while (head != NULL)
	{
		list = head->next;
		free(head->str);
		free(head);
		head = list;
	}
}
