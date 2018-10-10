#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, size;
	char *a;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	size = i + j + 1;
	a = malloc(sizeof(char) * size);
	if (a == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		*(a + i) = *(s1 + i);
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		*(a + i + j) = *(s2 + j);
	}

	return (a);
}
