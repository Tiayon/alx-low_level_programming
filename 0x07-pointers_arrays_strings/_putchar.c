#include "main.h"
#include <unistd.h>

/**
 * putchar - writes acharacter c to stdout
 * @c: character to be printed
 * return: on success 1
 * on error, -1 is returned, and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
