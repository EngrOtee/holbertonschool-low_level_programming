#include <stdlib.h>
#include "dog.h"
#include "holberton.h"
/**
 * init_dog - Initializes a variable of type struct dog
 *@d: Dog object
 *@name: Name of dog
 *@age: Age of dog
 *@owner: Owner of dog
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct Dog *d;

	dog = malloc(sizeof(struct Dog));
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
