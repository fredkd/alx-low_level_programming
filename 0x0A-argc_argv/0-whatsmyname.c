#include "main.h"

/**
 * main - this is the start of the code
 *@argc: count of the arguments supplied to the program
 *@argv: array of pointers to the strings
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argv < argc)
	{
		i++;
		argv[i]++;
	}
	printf("%s\n", argv[i]);

	return (0);
}
