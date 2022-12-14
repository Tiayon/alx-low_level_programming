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
		if (n <= '8')
			putchar(',');
		putchar(' ');
	}
	/* inline comment*/
	putchar('\n');
	return (0);
}
