#include "main.h"

/**
 * _abs - computes the absolute value of an interger
 *
 * @n: interger whose absolute value is to computed
 *
 * Return: returns absolute value of n
 *
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
