#include<stdio.h>
#include"main.h"
/**
 * print_last_digit - takes one int parameter
 * Description: prints alphabet in small letters
 *
 * @n : check n
 * Return: int Always
*/
int print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return (n % 10);
}
