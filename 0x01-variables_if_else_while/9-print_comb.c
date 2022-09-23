#include <stdio.h>

<<<<<<< HEAD
int main(void)
{
	int i;

	i = 0;
	while (i < 
=======
/**
 * main - Entry point
 * Description: prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)

{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');

		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
>>>>>>> 729d91988abf7696a1fcf3c3c635127964f05ef2
