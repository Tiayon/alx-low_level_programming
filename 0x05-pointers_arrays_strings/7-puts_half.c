#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: pointer to string whose second half is to printed
 * return: always 0
 */

void puts_half(char *str)
{
	int i, j;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
