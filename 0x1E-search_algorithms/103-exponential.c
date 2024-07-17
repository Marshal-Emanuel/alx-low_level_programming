#include <stdio.h>
#include <math.h>

/**
 * binary_search - Performs a binary search on a sorted array.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where the value is located, or -1 if the value is not
 *         present in the array.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;

	printf("Searching in array: ");
	for (size_t i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");

	while (left <= right)
	{
		size_t mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                     using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where the value is located, or -1 if the value is not
 *         present in the array or if the array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	size_t i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%zu] = [%d]\n", i, array[i]);
		i *= 2;
	}

	return (binary_search(array + (i / 2), (i < size) ? (size - (i / 2)) : (i / 2), value));
}
