#include "main.h"

/**
 *
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		_putchar('-');
		_putchar(1);
	}

	if (n == 0)
	{
		return (1);
	}

	n = n * factorial(n);

	return (n);
}
