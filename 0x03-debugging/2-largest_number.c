#include "main.h"

/**
 * largest_number - returns the largest of the 3 numbers
 * @a: first integer
 * @b : second integer
 * @c: third integer
 */

int largest_number(int a, int b, int c)
{
	if ((a > b) && (a > c))
	{
		largest = a;
	}
	else if ((b > a) && (b > c))
	{	
		largest = b;
	}
	else 
	{
		largest = c;
	}
}
