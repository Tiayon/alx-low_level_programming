#include "main.h"

/**
 * *_memset - fills the first n bytes of the memory area pointed to by s
 * @s: pointer to first n bytes of memory area
 * @b: constant byte
 * @n: maximum bytes to use
 * return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
