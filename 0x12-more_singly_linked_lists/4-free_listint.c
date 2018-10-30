#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: pointer to the beginning of the list
 * Return: Always 0.
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
