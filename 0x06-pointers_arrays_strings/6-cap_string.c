#include "main.h"

/** cap_string - capitalization
 * @x: first parpam
 * Return : uppercase
 */
char *cap_string(char *x)
{
	int i = 0;
	
	while (x[i])
	{
		while (!(x[i] >= 'a' && x[i] <= 'z'))
		{
			i++;
		}
		if (x[i - 1] == ' ' || x[i - 1] == '\t' || x[i - 1] == '\n' || x[i - 1] == ',' || x[i - 1] == ';' || x[i - 1] == '.' || x[i - 1] == '!' || x[i - 1] == '?' || x[i - 1] == '"' || x[i - 1] == '(' || x[i - 1] == ')' || x[i - 1] == '{' || x[i - 1] == '}' || i == 0 )
			x[i] -= 32;
		i++;
	}
}
