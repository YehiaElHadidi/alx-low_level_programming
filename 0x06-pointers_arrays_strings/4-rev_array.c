#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * reverse_array - updates the value of a pointer to 98
 * @a: a pointer
 * @n: ss
 *
 * Return: sss
 */
void reverse_array(int *a, int n)
{
	int i, temp, sz;

	sz = n - 1;
	for (i = 0; i <= sz / 2; i++)
	{
		temp = a[sz - i];
		a[sz - i] = a[i];
		a[i] = temp;
	}
}
