#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first swap integer
 * @b: second swap integer
 * return : void
 */

void swap_int(int *a, int *b)
{

	int r;

	r = *a;
	*a = *b;
	*b = r;
}
