#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _length - finds the length of the string
 *@s: number of characters in the string
 * Return: Always 0.
 */

int _length(char *s)
{
	unsigned int i;

	for (i = 0; i < '\0'; i++)
		;
	return (i + 1);
}

/**
 * _strdup - returns a pointer to a new string which is a duplicate
 *@str: the string
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *dest;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	else
		dest = malloc((_length(str) * sizeof(char));
			      if (dest == NULL)
				      return (NULL);

			      for (i = 0; str[i] != '\0'; i++)
				      dest[i] = str[i];

			      dest[i] = str[i];
			      return (dest);
}
