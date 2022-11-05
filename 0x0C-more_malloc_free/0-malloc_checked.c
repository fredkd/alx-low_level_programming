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
	int *s;

	s = malloc(sizeof(int) * b);

	if (s == NULL)
	{
		return (1);
	}

	return (&(s);
}
	
