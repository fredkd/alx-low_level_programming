#include <stdio.h>

/**
 * main - entry point
 * Return: 0 always (success)
 */
int main(void)
{
	int i;
	double d;
	char c;
	float f;

	printf("The size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("The size of a double: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("The size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("The size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);

}

