#include "main.h"

/**
 * main - this is the start of the code
 *
 *argc - parameter used
 *
 *argv - parameter used
 *
 * Return: 0 Always (success)
 */

int main(argc, char *argv[])
{
	int i = 0;

	while (argv[i] < argc)
	{
		i++;
		argv[i]++;
	}

	return (0);
}
