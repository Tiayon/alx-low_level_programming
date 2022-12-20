#include "main.h"

/**
 * swap_int - function that swaps the values of a and b
 * @a: first parameter of the swap
 * @b: second parameter of the swap
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
