#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copies the string pointed to by src
 * @dest: pointer to dest buffer
 * @src: pointer to src buffer
 * return: always 0
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
