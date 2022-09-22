#include "main.h"

/**
 * *string_toupper - changes all lowercase to uppercase
 * @x: string param
 * Return: string
 */

char *string_toupper(char *x)
{
	int i = 0;
	A = 65, a = 97;
	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
		{
			x[i] = x[i] - 32;
		}
		i++;
	}
}
