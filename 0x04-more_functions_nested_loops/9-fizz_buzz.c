#include "main.h"
#include <stdio.h>

/**
 * main - tests if input given is a digit
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i != 100)
			printf(" ");
		if (!(i % 3 == 0 || i % 5 == 0))
			printf("%d", i);
	}
}
