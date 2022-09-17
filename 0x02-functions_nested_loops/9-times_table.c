#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0
 *
 * ro = row, col = column, dig = digits of current result
 *
 * Return: times table
 *
 *
 */
void times_table(void)
{
	int ro, col, dig;

	for (ro = 0; ro <= 9; ro++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (col = 1; col <= 9; col++)
		{
			dig = (ro * col);
			if ((dig / 10) > 0)
			{
				_putchar((dig / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((dig % 10) + '0');
			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
