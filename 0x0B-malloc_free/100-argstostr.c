#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: param used
 *
 * @av:param used
 *
 * Return: NULL IF ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
	char *c;
	int i, j, size = 0 , k = 0;
	
	if (ac == 0)
	{
		return (NULL);
	}
	if (av == 0)
	{
		return (NULL);
	}

	for (i = 0 ; i < ac; i++)
	{
		for(j = 0; av[i][j]; j++)
		{
			size++;
		}
		size++;
	}
	size++;
	
	c = malloc(size);
	
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			c[k] = av[i][j];
			k++;
		}
		c[k] = '\n';
	}
	c[k] = '\0';

	return (c);

}
