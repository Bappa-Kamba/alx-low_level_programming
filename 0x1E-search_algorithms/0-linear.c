#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using linear search
 * @array: pointer to the first element in the array to search
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: -1 if array is NULL or value not present, index of the element
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = {%d}\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
