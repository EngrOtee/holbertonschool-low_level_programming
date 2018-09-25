#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 *@a: number being swapped
 *@b: number being swapped
 */

void swap_int(int *a, int *b)
{
	int c = *a;

<<<<<<< HEAD
	*a = *b;
=======
	a = b;
>>>>>>> db425be27f4f46b53766c98920d447fbfec9f67f
	*b = c;
}
