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
	size_t i;

	if (!name || size == 0 || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
