#include "main.h"

/**
 * puts2 - prints string
 * @len: parameter used
 * @i: parameter used
 * Return : 0 
 */
void puts2(char *str)
{
	int len, i;
	len = srtlen(str)
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
