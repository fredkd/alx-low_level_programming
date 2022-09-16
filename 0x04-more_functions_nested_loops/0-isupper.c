#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - checks for uppercase character
 * @c: the characeter used in the argument
 * Return: Return 1 if c is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	int c;

	if ((c >= 'A') && (c <= 'Z'))
	{
		_isupper(c);
		return (1);
	}
	else
	{	_isupper(c);
		return (0);
	}
}
