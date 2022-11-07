#include "main.h"

/**
 * a function that concatenates two strings
 *
 * @s1: first param
 *
 * @s2: second param
 *
 * @n : int used
 *
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int i, a = 0;
	unsigned int j;

	if (s1 == 0)
	{
		s1 = ""; 
	}
	if (s2 == 0)
	{
		s2 = "";
	}

	for (i = 0; s1[i];i++)
	}
		;
	}

	for (j = 0; s2[j]; j++)
	{
		;
	}

	if (j > n)
	{
		j = n;
	}


	s = malloc((sizeof(char) * i) + (sizeof(char) * j) + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	
	while (*s1 != '\0')
	{
		s[a] = *s1;
		s1++;
		a++;
	}
	while (a < j + 1)
	{
		s[a] = *s2;
		s2++;
		a++;
	}
	
	s[i + j] = '\0';

	return (s);
}
