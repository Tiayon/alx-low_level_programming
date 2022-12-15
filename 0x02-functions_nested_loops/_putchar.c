#include "main.h"
#include <unistd.h>
/**
 * _putchar will write the character c to stdout
 * &c is the character to be printed
 *
 * Return: always 1 (success)
 * returns -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
