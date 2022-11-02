#include "main.h"

/**
 * _strspn - gets the length of a prfix substring
 *
 * @s: returns the number of bytes in the initial segment
 *
 * @accept: bytes in pointer
 *
 * Return: number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i,j,flag;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		flag = 1;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				f = 0;
				break;
			}
			j++;
		}
		if (f == 1)
		{
			break;
		}
		i++;

	}
	return (i);
}
