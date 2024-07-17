#include <math.h>
#include <stdio.h>

/**
 * jump_search - Searches for a value in a sorted array of integers using the
 *               Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where the value is located, or -1 if the value is not
 *         present in the array or if the array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t start = 0;
	size_t end = step;

	if (array == NULL || size == 0)
		return (-1);

	while (array[end - 1] < value && end < size)
	{
		printf("Value checked array[%zu] = [%d]\n", start, array[start]);
		start = end;
		end += step;
		if (end > size)
			end = size;
	}

	while (array[start] <= value && start < size)
	{
		printf("Value checked array[%zu] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
	}

	return (-1);
}
