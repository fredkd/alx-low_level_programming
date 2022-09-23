#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @x: string param
 * Return: x
 */

char *string_toupper(char *x)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
	}
	return (x);
}
