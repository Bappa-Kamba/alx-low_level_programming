#include "search_algos.h"

/**
 * print_array - helper func to print array everytime array is halved
 * @array: array
 * @low: left index of original array
 * @high: right index of original array
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i != high)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

/**
 * binary_search - searches for a value in a sorted array using binary search
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: -1 if array is NULL or value not found, index otherwise
 */
int binary_search(int *array, size_t size, int value) {

	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL || size == 0)
        return -1; /* Array is NULL or empty */

    while (low <= high) {
        size_t mid = low + (high - low) / 2;
		print_array(array, low, high);

        if (array[mid] == value)
            return mid; /* Value found at mid index */

        if (array[mid] < value)
            low = mid + 1; /* Search in the right half */
        else
            high = mid - 1; /* Search in the left half */
    }

    return -1; /* Value not found in the array */
}
