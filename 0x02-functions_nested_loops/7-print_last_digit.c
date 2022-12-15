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
	if (n < 0)
		n = (-1) * n;
	_putchar((n % 10) + '0');
	return (n % 10);
}
	
