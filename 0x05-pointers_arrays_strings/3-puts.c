#include "main.h"

/**
 * _puts - prints a string followed by a newline
 * @str: string to print
 * return: always 0.
 */

void _puts(char *str)
{
	int s = 0;

	while (str[s])
	{
		_putchar(str[s]);
		s++;
	}

	_putchar('\n');
}
