#include <stdio.h>

/**
 * main - This is the start of the code
 * @i: parameter used
 * @j: parameter used
 * Return: 0 success
 */
int main(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
