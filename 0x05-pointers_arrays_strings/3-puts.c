#include "main.h"

/**
 * _puts - prints a string
 * @*str: parameter used
 * return: void
 */

void _puts(char *s)
{
	int i;

	for (i = 0 ; i != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
