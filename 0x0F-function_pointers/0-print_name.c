#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 *
 * @*name: parameter used
 *
 * @*f: function pointer
 *
 *Return: void
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != '\0' && f != '\0')
	{
		f(name);
	}
}
