#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c != 'q' && c != 'e')
	{
		putchar(c);
	}
	}
	/* inline comment*/
	putchar('\n');
	return (0);
}
