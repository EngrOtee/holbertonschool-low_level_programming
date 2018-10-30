#include "lists.h"

/**
 * free_listint2 - Frees a list
 * @head: pointer to the beginning of the list
 * Return: Always 0.
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		(*head) = ptr;
	}
}
