#include <stdlib.h>
/**
 * array_iterator - prints a name using another function
 * @array: name to print
 * @size: function to use to print name
 * @action: sdsdsd
 * Return: Void ALWAYS
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!name || !action)
		return;
	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
