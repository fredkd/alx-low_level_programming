#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of characters and initializes it with 
 * a special character
 *
 * @size: parameter used int
 *
 * @c: character used as param
 *
 * Return: NULL if size = (0)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *m;

	m = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return 0;
	}

	if (m == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		m[i] = c;
		i++;
	}

	return (m);
}
