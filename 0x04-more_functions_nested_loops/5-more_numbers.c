#include "main.h"

/**
 * print_most_numbers - tests if input given is a digit
 * Return: void
 *
 */

void print_most_numbers(void)
{
	int i, j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');

		}
		_putchar('\n');
	}
}
