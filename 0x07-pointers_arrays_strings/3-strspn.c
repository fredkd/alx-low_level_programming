#include "main.h"

/**
 * _strspn - gets the length of a prfix substring
 *
 * @s: returns the number of bytes in the initial segment
 *
 * @accept: bytes in pointer
 *
 * Return: 0 Always (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i , len = 0;

	for (i = 0; s[i] < len; i++)
	{
		accept[i] = s[i];
		len++;
	}
	return (len);
}
