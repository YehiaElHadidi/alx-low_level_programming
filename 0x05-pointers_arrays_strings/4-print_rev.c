#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - updates the value of a pointer to 98
 * @s: a pointer
 *
 * Return: void ALWAYS
 */
void print_rev(char *s)
{
	int i, cnt;

	cnt = 0;
	while (s[cnt] != '\0')
		cnt++;

	for (i = cnt; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
