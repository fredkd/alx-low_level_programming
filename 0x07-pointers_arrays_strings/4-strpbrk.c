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

	int i = 0, j = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*(accept + j ) == s[i])
			{
				return (&(s[i]));

			}
		}
	}
	return (NULL);
}
