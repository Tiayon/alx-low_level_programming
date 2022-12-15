#include "main.h"
#include <limits.h> 
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
	int l;
	int a = INT_MIN;
	r = n % 10;
	l = a % 10;

	if (n < 0 && a < 0)
	{
		n = (-1) * n;
		a = (-1) * a;
		_putchar(r + '0');
		_putchar(l + '0');
	}
	return (r);
	return (l);
	
}
