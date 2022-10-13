#include "function_pointers.h"

/**
  * array_iterator - executes each function passed as argument
  *
  * @array: array  of elements
  * @size: size of the array
  * @action: function to be executed
  *
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array != NULL && size && action != NULL)
	{
		for (; (size_t) i < size; i++)
			action(array[i]);
	}
}
