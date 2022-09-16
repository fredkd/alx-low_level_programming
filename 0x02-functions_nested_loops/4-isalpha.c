#include "main.h"

/**
 * _isalpha - function to check if c is lower
 *
 * @c: the character ised in the argument of this function
 *
 * Return : 0
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z) ||(c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
