#include <stdio.h>
/**
* main - entry point
* Return: Always 0 (success)
*/
int main(void)
{
	long int a;
	long long int b;
	float c;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(b));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(c));
	/* sizeof prints the size of each data type*/
	return (0);
}
