#include <stdio.h>

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *                       using the Interpolation search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where the value is located, or -1 if the value is not
 *         present in the array or if the array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		printf("Value checked array[%zu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
