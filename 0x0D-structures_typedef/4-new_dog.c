#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
char *_strdup(char *str);
int str_len(char *s);
/**
 * new_dog - creates a new dog object
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 * Return: Dog, NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a = NULL;

	if (name == NULL || owner == NULL)
		return (NULL);

	a = malloc(sizeof(dog_t));

	if (a == NULL)
	{
		return (NULL);
	}
	a->name = _strdup(name);
	if (a->name == NULL)
	{
		free(a);
		return (NULL);
	}
	a->age = age;
	a->owner = _strdup(owner);
	if (a->owner == NULL)
	{
	     	free(a->name);
		free(a);
		return (NULL);
	}
	return (a);
}



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
