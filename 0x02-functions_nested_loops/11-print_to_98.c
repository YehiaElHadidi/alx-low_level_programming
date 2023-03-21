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
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i != n)
		{
			printf(", ");
		}
		printf("%d", i);
	}

	for (i = n; i >= 98; i--)
	{
		if (i != n)
		{
			printf(", ");
		}
		printf("%d", i);
	}
	printf("\n");
}
