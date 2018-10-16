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
	dog_t *dog = NULL;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = _strdup(name);
	if (dog->name == NULL)
		free(dog);
	dog->age = age;
	dog->owner = _strdup(owner);
		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
	return (dog);
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

/**
 * _strlen - returns the length of the string
 *@s: string being counted
 * Return: Always 0.
 */

int str_len(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
