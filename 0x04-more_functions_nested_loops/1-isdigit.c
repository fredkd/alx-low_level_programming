#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for a digit between 0-9
 * @c: the interger used in function
 * Return: 1 if a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '10'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
