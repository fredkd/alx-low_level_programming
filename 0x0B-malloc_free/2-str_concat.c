#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *str_concat - concatenates two strings
 *
 * @s1: param used
 *
 * @s2:param used
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, m = 0;
	char *c;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (i = 0; i < s1[i]; i++)
	{
		;
	}

	for (j = 0; j < s2[j]; j++)
	{
		;
	}

	c = malloc((sizeof(char) * i) + (sizeof(char) * j)+ 1);

	if (c == NULL)
	{
		return (NULL);
	}

	while (*s1 != '\0')
	{
		c[m] = *s1;
		s1++;
		m++;
	}

	while (*s2 != '\0')
	{
		c[m] = *s2;
		s2++;
		m++;
	}

	c[m] = '\0';

	return (c);
}
