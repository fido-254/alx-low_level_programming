#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Searches For Intager
 * @array: array pointer
 * @size: array size
 * @cmp: points function and checks array match
 * Return: Return (0)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x, result;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		result = cmp(*(array + x));
		if (result > 0)
			return (x);
	}
	return (-1);
}
