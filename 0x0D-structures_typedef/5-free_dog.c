#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return (d);
	if (d->owner != NULL)
		free(d->owner);
	if(d->name != NULL)
		free(d->name);
	free(d);
}
