#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 *@argc: count of arguments
 *@argv: array of pointers to the strings passed
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
