#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - this is the start of the code
 * @n: parameter used
 * @l: checks for last digit of n
 * Return: 0 always (success)
 */
int main(void)
{
	int n;
	int l;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n % 10;
	if (l > 5)
	{
		printf("The last digit of n is %d and is greater than 5\n", l);
	}
	else if (l == 0)
	{
		printf("The last digit of n is %d and is 0\n", l);
	}
	else
	{
		printf("The last digit of n is %d and is less than 6 and not 0\n", l)
	return (0);
}
