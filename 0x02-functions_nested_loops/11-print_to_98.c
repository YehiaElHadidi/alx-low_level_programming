#include<stdio.h>
#include"main.h"
/**
 * print_to_98 - void parameter
 * Description: prints alphabet in small letters
 *
 * @n : loop from n to 98
 * Return: void Always
*/
void print_to_98(int n)
{
	for (i = n; i <= 98; i++)
	{
		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}
		printf("%d", i);
	}

	for (i = n; i >= 98; i--)
	{
		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}
		printf("%d", i);
	}
}
