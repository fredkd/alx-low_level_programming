#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: input letter
 * Return: Always success
 */
<<<<<<< HEAD

=======
>>>>>>> 729d91988abf7696a1fcf3c3c635127964f05ef2
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} 
	else if (n == 0) 
	{
		_putchar('0');
		return (0);
	}
	else 
	{
<<<<<<< HEAD
		_putchar('_');
=======
		_putchar('-');
>>>>>>> 729d91988abf7696a1fcf3c3c635127964f05ef2
		return (-1);
	}	
}
