#include "main.h"
/**
 * _isalpha - checks if a letter is uppercase or lowercase
 *
 * @c: character to be checked
 *
 * Return: returns 1 if the letter is uppercase or lowercase and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
