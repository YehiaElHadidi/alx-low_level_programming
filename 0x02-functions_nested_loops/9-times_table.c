#include<stdio.h>
#include"main.h"
/**
 * times_table - void parameter
 * Description: prints alphabet in small letters
 *
 * Return: void Always
*/
void times_table(void)
{
	int i, j, sum;
	for (i = 0; i <= 9; i++)
	{
		sum = i;
		for (j = 0; j <= 9; j++)
		{
			_putchar(sum + 48);
			if (i != 9)
			{
				_putchar(' ');
				_putchar(',');
			}
			sum += i;
		}
		_putchar('\n');
	}
}
