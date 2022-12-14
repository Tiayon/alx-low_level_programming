#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	char c;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	/* inline comment*/
	putchar('\n');
	return (0);
}
