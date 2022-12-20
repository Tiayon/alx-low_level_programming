#include "main.h"

/**
 * print_rev - prints a string in the reverse direction
 * @s: pointer to string to be reversed printed
 * return: always 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
