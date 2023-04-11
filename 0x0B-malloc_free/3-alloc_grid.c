#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * alloc_grid - updates the value of a pointer to 98
 * @str: a pointer
 * Return: char * ALWAYS
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width < 1 || height < 1)
		return (NULL);


	ptr = (int **)malloc(height * sizeof(int));
	if (ptr == NULL)
                return (NULL);
	for(i = 0; i < height; i++){
		ptr[i] = (int *)malloc(width * sizeof(int));
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	return (ptr);
}
