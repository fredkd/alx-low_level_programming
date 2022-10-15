#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * *s: param used
 *
 * Return: 0 Always (success)
 */

int _atoi(char *s)
{
	int i;
	char t = &s;

	for (i = 0; t[i] != '\0'; i++)
	{
		for (t = 'a', t <= 'z'; t++)
		{
			if (t != 'a' || t != 'z')
			{
				continue;
			}
		}
		
		if ((t != " \" ") || (t != " - ") || (t != " + "))
		{
			continue;
		}

		for (t = 0; t <= 9; t++)
		{
			_putchar(t);
		}
	}

	return (0);
}
