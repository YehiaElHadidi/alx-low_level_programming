#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strncpy - updates the value of a pointer to 98
 * @des: a pointer
 * @src: ss
 * @n: sss
 * Return: char * ALWAYS
 */
char *_strncpy(char *des, char *src, int n)
{
	int k;
	
	for (k = 0; src[k] != '\0' && k < n; k++)
		des[k] = src[k];

	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (des);
}
