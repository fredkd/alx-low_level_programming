#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: first param
 * @n: second param
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int *p, i, aux, k;
	aux = 1;
	p = a;

	for (i = 0; i < n; i++)
	{
		p++;
	}
	for (k = 0;k < n / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
