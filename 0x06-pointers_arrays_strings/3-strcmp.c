#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strcmp - updates the value of a pointer to 98
 * @s1: a pointer
 * @s2: ss
 *
 * Return: int ALWAYS
 */
int _strcmp(char *s1, char *s2)
{
	int i, sz, j, k;

	i = 0;
	while (s1[i] == s2[i])
		i++;

	return (s1[i] - s2[i]);
}