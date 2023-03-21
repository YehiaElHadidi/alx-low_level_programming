#include<stdio.h>
#include"main.h"
/**
 * print_times_table - int parameter
 * Description: prints alphabet in small letters
 *
 * @n : n table
 * Return: void Always
*/
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (i * j <= 9 && j != 0)
				_putchar(' ');

			if (i * j > 9)
			{
				_putchar((((i * j) / 10) % 10) + 48);
			}
			_putchar(((i * j) % 10) + 48);
		}
		_putchar('\n');
	}
}
