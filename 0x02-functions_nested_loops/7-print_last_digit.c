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
	int last_digit = n % 10;

	if (n < 0)
	{
		last_digit = (-1) * (last_digit);
		_putchar(last_digit + '0');
	return (last_digit);
	}
	else
	{
		last_digit = last_digit;
		_putchar(last_digit + '0');
	return (last_digit);
	}
}
