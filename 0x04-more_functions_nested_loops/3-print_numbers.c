#include "main.h"

/**
 * print_numbers - check the code
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int i;
	int j = 0;

	while (j < 9)
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar(i);
		}
	j++;
	_putchar('\n');
	}
}
