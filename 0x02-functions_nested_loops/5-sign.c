#include<stdio.h>
#include"main.h"
/**
 * _isalpha - takes one int parameter
 * Description: prints alphabet in small letters
 *
 * @n : check n
 * Return: int Always
*/
int _isalpha(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
