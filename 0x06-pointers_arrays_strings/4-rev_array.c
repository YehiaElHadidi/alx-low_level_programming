#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * reverse_array - updates the value of a pointer to 98
 * @a: a pointer
 * @n: ss
 *
 * Return: int ALWAYS
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	n -= 1;
	for (i = 0; i <= n / 2; i++)
	{
		temp = a[sz - i];
		a[sz - i] = a[i];
		a[i] = temp;
	}
}