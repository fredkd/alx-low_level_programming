#include "main.h"

/**
 * print_most_numbers - print numbers
 * @i: integer used
 * Return: integer
 */
void print_most_numbers(void)
{
	int i;
	
	for (i = 0; i <= 9; i++)
	{
		while (i != 2 && i !=4)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
