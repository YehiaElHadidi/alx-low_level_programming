#include "main.h"
#include <stdio.h>

/**
 * print_square - tests if input given is a digit
 * Return: void
 * @size: int
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
	if (size <= 0)
	{
		putchar('\n');
	}
}
