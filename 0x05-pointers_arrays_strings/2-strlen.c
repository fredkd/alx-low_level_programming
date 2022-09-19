#include "main.h"

/**
 * _strlen - returns the length of a string
 * @char *s: parameter used
 *  return: 0 as success
 */

int _strlen(char *s)
{
	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}


	return (len);
}
