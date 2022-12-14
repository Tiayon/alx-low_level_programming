#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	/* inline comment*/
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
