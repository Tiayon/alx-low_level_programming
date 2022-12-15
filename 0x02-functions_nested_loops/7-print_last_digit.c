#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number whose last digit will be printed
 *
 * Return: returns last digit of the number
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
		n = (-1) * n;
	r = n % 10;
		_putchar(r + '0');
	return (r);
}
