#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	int i, j, z, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (z = i; z <= 57; z++)
			{
				for (k = j + 1; k <= 57; k++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(z);
					putchar(k);
					if (!(i == 57 && j == 56 && z == 57 && k == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
