#include "main.h"
/**
 * *_memset - fills the first n bytes of the memory area pointed to by s
 * @s: pointer to put constant
 * @b: constant
 * @n: maximum bytes to use
 * return: s
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
