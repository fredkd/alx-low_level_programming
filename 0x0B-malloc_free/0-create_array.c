#include "main.h"

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
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		size = malloc(sizeof(c) * i);
		_putchar('*');
		_putchar(c);
	}
	if (size == 0)
		return 0;


