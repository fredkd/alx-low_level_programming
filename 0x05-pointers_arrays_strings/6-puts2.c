#include "main.h"
#include <string.h>

/**
 * puts2 - prints string
 * @len: parameter used
 * @i: parameter used
 * Return : 0 
 */
void puts2(char *str)
{
	int len, i;
	len = strlen(str);
	for (i = 0; i < len; i+=2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
