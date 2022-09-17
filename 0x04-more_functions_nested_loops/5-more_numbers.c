#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 except 2 and 4 ten times
 *
 *
 */
void more_numbers(void)
{
	int i, j;
	i = 0;
	for (i = 0; i <=9; i++)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar(j + 0);
			j++;
		}
		_putchar('\n')
	}

