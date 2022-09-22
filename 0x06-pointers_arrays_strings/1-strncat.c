#include "main.h"

/**
 * _strncat - function to append char
 * @dest: first param
 * @src:second param
 * @n : third param
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, n, i;

        while (dest[len])
        {
                len++;
        }
        for (i = 0; src[i] != '0'; i++)
        {
                dest[len] = src[i];
                len += 1;
        }
        dest[len] = '\0';

        return (dest);
}

