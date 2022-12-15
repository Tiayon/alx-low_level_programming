#include "main.h"
/**
 * _islower - checks if a caharacter is a lowercase character
 * @c: character to be checked
 * Return: returns 1 if it's lowercase and 0 it it's not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

