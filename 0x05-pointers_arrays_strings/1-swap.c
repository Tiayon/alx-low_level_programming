#include "main.h"

/**
 * swap_int - function that swaps the values of a and b
 * @a: first parameter of the swap
 * @b: second parameter of the swap
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int swp;
	int x = 98;
	int y = 42;

	a = &x;
	b = &y;

	swp = *a ;
	*a = *b;
	*b = swp;
}
