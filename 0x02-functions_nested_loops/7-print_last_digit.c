#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 *
 * @last: number's last digit result
 *
 * Return: value of the last digit
 *
 */
int print_last_digit(int last)
{
	int lst;

	lst = last % 10;
	if (lst < 0)
	{
		lst = (-1 * lst);
	}
	_putchar(lst + '0');
	return (lst);
}
