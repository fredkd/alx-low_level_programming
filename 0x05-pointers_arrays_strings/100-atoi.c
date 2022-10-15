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
	char i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (s = 'a'; s <= 'z'; s++)
		{
			if (s != 'a' || s != 'z')
			{
				continue;
			}
		}
		
		if ((s != " \" ") || (s != " - ") || (s != " + "))
		{
			continue;
		}

		for (s = 0; s <= 9; s++)
		{
			_putchar(*s);
		}
	}

	return (0);
}
