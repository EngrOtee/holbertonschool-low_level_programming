#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to head of list
 * Return: The head nodes data
 */

int pop_listint(listint_t **head)
{
	listint_t *next;
	int data;

	if (*head == NULL || head == NULL)
		return (0);

	data = (*head)->n;
	next = (*head)->next;
	free(*head);
	*head = next;
	return (data);
}
