#include "main.h"
#include <stdio.h>

/**
 * _strlen - prints the length of a string
 * @s: string whose length is printed
 * Return: always 0.
 */

int _strlen(char *s)
{
	int len = 0;

	while(s[len])
		len++;
	return (len);
}
