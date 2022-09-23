#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @*s : parameter used
 *  return: void
 */

void rev_string(char *s)
{
	int i, r_s;
	char character;

	for (i = '\0'; s[i] != 0; i++)
	{
	
	}
	r_s = 0;
	for (i = i - 1; r_s < i; r_s++)
	{
		character = s[i];
		s[i] = s[r_s];
		s[r_s] = character;
		i--;
	}
}
