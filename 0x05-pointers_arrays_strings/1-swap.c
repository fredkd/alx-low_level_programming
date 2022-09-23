#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @int *a: first swap integer
 * @int *b: second swap integer
 * return : void
 */

void swap_int(int *a, int *b)
{
	
	int r;
	
	r = *a;
	*a = *b;
	*b = r;
}