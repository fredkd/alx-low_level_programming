#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: The character to print
 * Return: 1 0n success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
