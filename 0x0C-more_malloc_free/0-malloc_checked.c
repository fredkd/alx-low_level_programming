#include "main.h"

/**
 * malloc_checked - a function that allocated memory using malloc
 *
 * @b: interger used
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}

	return (s);
}
	
