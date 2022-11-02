#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of byte
 *
 * @s: string
 *
 * @accept:bytes used
 *
 * Return: pointer to the byte s
 *
 */

char *_strpbrk(char *s, char *accept)
{

	while (*s != '\0')
	{
		if (*s == *accept)
		{
			return (*s);
		}
		s++;

	
	}
	if (*s == *accept)
	{
		return (*s);

	}

}
