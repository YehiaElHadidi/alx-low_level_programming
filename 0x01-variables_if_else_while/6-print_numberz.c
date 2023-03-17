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
	char i;

	for (i = '1'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
