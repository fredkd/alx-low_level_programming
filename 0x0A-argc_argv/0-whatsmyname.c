#include "main.h"
#include <stdio.h>

/**
 * main - this is the start of the code
 *@argc: count of the arguments supplied to the program
 *@argv: array of pointers to the strings
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
