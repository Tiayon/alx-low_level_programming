#include "main.h"

/**
 * rev_string -reverses a string
 * @s: pointer to string to be reversed
 * return: always 0
 */
void rev_string(char *s)
{
	int a, len;
	char t;
	int half;

	for (len = 0; s[len] != '\0'; len++)
	{
		a = 0;
		half = len / 2;
	}
	while (half--)
	{
		t = s[len - a - 1];
		s[len - a - 1] = s[a];
		s[a] = t;
		a++;
	}
}
