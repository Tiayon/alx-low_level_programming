#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int c;
	int count = 0;

	if (count <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
		count++;
	}
}
