#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: pointer to string whose second half is to printed
 * return: always 0
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
