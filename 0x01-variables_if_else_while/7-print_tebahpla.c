#include <stdio.h>

/**
 * main - this is the start of code
 * Return: 0 as success
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
