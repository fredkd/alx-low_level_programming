#include <stdio.h>

/**
 * main - This is the start of code
 * Return: 0 Always success
 */
int main(void)
{
	char i;


	for (i = 'a'; i <= 'z'; ++i)
<<<<<<< HEAD

	{
		if(i == 'e' || i == 'q')
		
		{
			
			continue;

		}

		else
		{

			putchar(i);

		}
	
=======
	{
		if (i == 'e' || i == 'q')
		{
			continue;
		}
		else
		{
			putchar(i);
		}
>>>>>>> 729d91988abf7696a1fcf3c3c635127964f05ef2
	}

	putchar('\n');

<<<<<<< HEAD
	return(0);
}
=======
	return (0);
}

>>>>>>> 729d91988abf7696a1fcf3c3c635127964f05ef2
