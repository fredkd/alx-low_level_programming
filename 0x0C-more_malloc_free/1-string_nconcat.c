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
	char *str;

	int i, a = 0;
	int j;

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
	i++;
	for (j = 0; s2[j]; j++)
	{
		;
	}
	j++;

	if (j > n)
	{
		j = n;
	}


	str = malloc((sizeof(char) * i) + (sizeof(char) * j) + 1);

	if (c == NULL)
	{
		return (NULL);
	}
	
	while (*s1 != '\0')
	{
		str[a] = *s1;
		s1++;
		a++;
	}
	while (a < j + 1)
	{
		str[a] = *s2;
		s2++;
		a++;
	}
	
	str[i + j] = '\0';

	return (c);
}
