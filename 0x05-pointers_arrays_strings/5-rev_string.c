#include "main.h"

/**
 * rev_string -reverses a string
 * @s: pointer to string to be reversed
 * return: always 0
 */
void rev_string(char *s)
{
	int a, i;
	char t[1000];
	
	a = i = 0;

	while (s[a] != '\0')
	{
		t[a] = s[a];
		a++;
	}
	a--;
	while (a >= 0)
	{
		s[a] = t[i];
		a--;
		i++;
	}
	s[i++] ='\0';
}
