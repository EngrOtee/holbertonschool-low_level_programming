#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *@str: string being allocated in memory
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	int i, str_len;
	char *dupe;

	if (str == NULL)
		return (NULL);
	for (str_len = 0; str[str_len] != '\0'; str_len++)
		;
	dupe = malloc(sizeof(char) * str_len + 1);
	if (dupe == NULL)
		return (NULL);
	for (i = 0; i < str_len; i++)
		dupe[i] = str[i];
	return (dupe);
}
