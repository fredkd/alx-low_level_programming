#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *main - this is the start of the code
 * Return : 0 always(success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n >= 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("0 is zero\n");
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
