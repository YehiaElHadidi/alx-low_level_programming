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
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
