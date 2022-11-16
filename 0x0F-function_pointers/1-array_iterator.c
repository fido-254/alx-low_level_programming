#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - interchanges Arrays
 * @array: int array
 * @size: Size
 * @action: action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array != NULL && action != NULL)
	{
		for (x = 0; x < size; x++)
		{
			action(*(array + x));
		}
	}
}
