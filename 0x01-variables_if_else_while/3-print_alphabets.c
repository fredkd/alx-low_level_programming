#include <stdio.h>

/**
 * main - this is the start of the code
 * Return: 0 Always (success)
 */
int main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	return (0);
}
