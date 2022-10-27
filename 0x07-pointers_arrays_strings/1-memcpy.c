#include "main.h"

/* _memcpy - copies memory area
 *
 * @src: copied memory pointer
 *
 * @dest: new memory pointer
 *
 * @n: number of bytes
 *
 * Return: pointer dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *a;

	for (i = 0; i < n; i++)
	{
		src[i];
	}

	*a = src[i];
	src[i] = *dest;
	*dest = *a;


	return (dest);
}
