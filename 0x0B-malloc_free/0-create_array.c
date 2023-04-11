#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * create_array - updates the value of a pointer to 98
 * @size: a pointer
 * @c: ss
 *
 * Return: char * ALWAYS
 */
char *create_array(unsigned int size, char c)
{
	int *ptr, i;
	
	ptr = ((char*)malloc(size * sizeof(char)));
	for(i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
