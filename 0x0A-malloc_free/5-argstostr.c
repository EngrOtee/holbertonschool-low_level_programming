#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_len - Gets the length of the string
 *@av: string
 *@a: int
 * Return: Length of string
 */

unsigned int str_len(char **av, int a)
{
	unsigned int i;

	for (i = 0; av[a][i] != '\0'; i++)
		;
	return (i);
}
/**
 * argstostr - Concatenates all arguments of the program
 *@ac: argument count
 *@av: 2D array
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *c;
	int a, b, count = 0;
	unsigned int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		k += str_len(av, a);
	}
	c = malloc((k + 1 + ac) * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; (c[count] = av[a][b]) != '\0'; b++)
			count++;
		c[count] = '\n';
		count++;
	}
	c[count] = '\0';
	return (c);
}
