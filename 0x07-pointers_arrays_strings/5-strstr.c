#include "main.h"

/**
 * _strstr - locates a substring 
 *
 * @haystack: string
 *
 * @needle: string
 *
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i= 0, j = 0;
	int k,s;

	for (s = 0; needle[s];s++)
	{
		;
	}
	if (s == 0)
	{
		return (haystack);
	}
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			i++;
			j++;

			for (k = i; haystack[k]; k++)
			{
				if (needle[j] == '\0')
				{
					return (&(haystack[i - 1]));
				}
				if (haystack[k] != needle[j])
				{
					break;
				}
				j++;
			}
		}
		i++;
		j = 0;
	}
	return (NULL);
}





