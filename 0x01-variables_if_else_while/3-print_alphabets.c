#include <stdio.h>
/**
 * * main - entry pont
 * Return: Always 0 (success)
 * code to print the alphabet
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	
	putchar('\n');
	/* program for the alphABET*/
	return (0);
}
