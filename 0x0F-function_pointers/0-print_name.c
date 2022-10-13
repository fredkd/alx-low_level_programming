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
	int i = 0;

	while (name[i] != '\0')
	{
		i++;
	}
	f(name) =  name[i];
	_putchar(f(name);

}
