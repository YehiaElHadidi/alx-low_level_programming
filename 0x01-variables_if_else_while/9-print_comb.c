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
	int i;

	for (i = 48; i <= 56; i++)
	{
		putchar(i);
		if (i == 56){
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
