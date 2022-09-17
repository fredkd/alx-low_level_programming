#include "main.h"
#include <stdio.h>

/**
 * print_line - a function that draws a straight line in the terminal
 *
 * @n: input number of times to print '_'
 *
 * Return: a straight line
 *
 */
void print_line(int n)
{
	int len = 0;

	if (len < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (len = 1; len <= n; len++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}I
